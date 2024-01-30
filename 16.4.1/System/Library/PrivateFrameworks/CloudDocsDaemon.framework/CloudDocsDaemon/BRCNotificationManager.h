@class BRNotificationQueue, NSString, NSHashTable, NSMutableDictionary, BRCAccountSession, BRCClientRanksPersistedState, NSObject, NSMutableSet, BRCXPCClient, NSMapTable;
@protocol OS_dispatch_queue;

@interface BRCNotificationManager : NSObject <BRCModule> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_pipes;
    NSMutableDictionary *_watchersByFileObjectID;
    _Atomic unsigned long long _activeAliasQueries;
    BRCClientRanksPersistedState *_state;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BRNotificationQueue *_notifs;
    NSMutableDictionary *_transferCache;
    BRCXPCClient *_client;
    NSMutableSet *_additionalUpdatesItemRowID;
    unsigned long long _previousMaxRank;
    NSMapTable *_fileObjectIDByWatcher;
}

@property (readonly) BOOL hasActiveAliasWatchers;
@property (readonly, nonatomic) BRCAccountSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)suspend;
- (void)cancel;
- (void)close;
- (id)initWithAccountSession:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (BOOL)hasWatcherMatchingGlobalItemID:(id)a0;
- (void)_dispatchUpdatesToPipesWithRank:(unsigned long long)a0;
- (void)_queueAdditionalUpdates;
- (void)fetchLastFlushedRankWithReply:(id /* block */)a0;
- (void)flushUpdatesWithRank:(unsigned long long)a0;
- (void)getPipeWithXPCReceiver:(id)a0 client:(id)a1 reply:(id /* block */)a2;
- (BOOL)hasWatcherForDocumentID:(id)a0;
- (void)invalidatePipeReceiversWatchingAppLibraryIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidatePipesWatchingAppLibraryIDs:(id)a0;
- (void)pipeDelegateInvalidated:(id)a0;
- (id)pipeWithReceiver:(id)a0;
- (void)queueProgressUpdates:(id)a0;
- (void)queueUpdate:(id)a0;
- (void)queueUpdateForItemAtRowID:(unsigned long long)a0;
- (void)registerAppLibraries:(id)a0 forFlags:(unsigned long long)a1;
- (void)registerPipe:(id)a0 asWatcherForFileObjectID:(id)a1;
- (void)unregisterAppLibraries:(id)a0 forFlags:(unsigned long long)a1;
- (void)unregisterPipeAsWatcher:(id)a0;

@end
