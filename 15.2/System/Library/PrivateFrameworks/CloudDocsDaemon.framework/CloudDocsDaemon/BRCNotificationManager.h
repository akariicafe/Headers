@class NSHashTable, NSString, BRNotificationQueue, NSMutableDictionary, BRCAccountSession, BRCClientRanksPersistedState, NSObject, NSMutableSet, BRCXPCClient, NSMapTable;
@protocol OS_dispatch_queue;

@interface BRCNotificationManager : NSObject <BRCModule> {
    BRCClientRanksPersistedState *_state;
    NSHashTable *_pipes;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    BRCXPCClient *_client;
    _Atomic unsigned long long _activeAliasQueries;
    NSMutableSet *_additionalUpdatesItemRowID;
    unsigned long long _previousMaxRank;
    NSMutableDictionary *_watchersByFileObjectID;
    NSMapTable *_fileObjectIDByWatcher;
}

@property (readonly) BOOL hasActiveAliasWatchers;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)_dispatchUpdatesToPipesWithRank:(unsigned long long)a0;
- (void)registerPipe:(id)a0 asWatcherForFileObjectID:(id)a1;
- (void)pipeDelegateInvalidated:(id)a0;
- (void)close;
- (void)_queueAdditionalUpdates;
- (void)queueUpdateForItemAtRowID:(unsigned long long)a0;
- (void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidatePipesWatchingAppLibraryIDs:(id)a0;
- (id)initWithAccountSession:(id)a0;
- (void)getPipeWithXPCReceiver:(id)a0 client:(id)a1 reply:(id /* block */)a2;
- (id)pipeWithReceiver:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasWatcherForDocumentID:(id)a0;
- (void)unregisterAppLibraries:(id)a0 forFlags:(unsigned long long)a1;
- (void)registerAppLibraries:(id)a0 forFlags:(unsigned long long)a1;
- (void)queueUpdate:(id)a0;
- (void)flushUpdatesWithRank:(unsigned long long)a0;
- (void)suspend;
- (void)resume;
- (void)fetchLastFlushedRankWithReply:(id /* block */)a0;
- (void)cancel;
- (void)queueProgressUpdates:(id)a0;
- (void)unregisterPipeAsWatcher:(id)a0;

@end
