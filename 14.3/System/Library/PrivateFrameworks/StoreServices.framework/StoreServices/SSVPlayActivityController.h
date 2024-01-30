@class NSMutableDictionary, SSVPlayActivityTable, NSOperationQueue, NSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSVPlayActivityController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSOperationQueue *_debugLogOperationQueue;
    NSMutableDictionary *_endpointIdentifierToEndpointRevisionInformation;
    int _endpointRevisionInformationDidChangeNotifyToken;
    BOOL _hasAttemptedTableCreation;
    BOOL _hasLoadedEndpointRevisionInformation;
    BOOL _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
    BOOL _hasValidEndpointRevisionInformationDidChangeNotifyToken;
    NSMutableArray *_pendingFlushingSessions;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSVPlayActivityTable *_table;
    NSXPCConnection *_daemonPlayActivityControllerConnection;
}

@property (readonly, nonatomic) unsigned long long writingStyle;

+ (id)_requiredEndpointIdentifiers;

- (id)init;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)a0 withStoreAccountID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_daemonPlayActivityControllerConnection;
- (void)dealloc;
- (void)recordPlayActivityEvents:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removePlayActivityEventsUpToRevision:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_setupNotifyTokenIfNeeded;
- (void)completePendingPlayActivityEventPersistentIDs:(id)a0 forSessionToken:(unsigned long long)a1 withResult:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)getPlayActivityEventsFromRevision:(unsigned long long)a0 toRevision:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)_getFlushSessionInformationForEndpointIdentifier:(id)a0 shouldAcquire:(BOOL)a1 storeAccountID:(unsigned long long)a2 shouldFilterStoreAccountID:(BOOL)a3 withCompletionHandler:(id /* block */)a4;
- (id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)a0;
- (void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)completePendingPlayActivityEvents:(id)a0 forSessionToken:(unsigned long long)a1 withResult:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_completePendingPlayEventsWithRevisionIndexSet:(id)a0 forSessionToken:(unsigned long long)a1 withResult:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)_sessionInformationForSessionToken:(unsigned long long)a0;
- (void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)a0 withStoreAccountID:(unsigned long long)a1 shouldFilterStoreAccountID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)_setEndpointRevisionInformation:(id)a0 forEndpointIdentifier:(id)a1;
- (id)initWithWritingStyle:(unsigned long long)a0;
- (void)getRevisionInformationWithCompletionHandler:(id /* block */)a0;
- (id)_table;
- (id)_revisionsIndexSetForPlayActivityEvents:(id)a0;
- (void)setCurrentRevision:(unsigned long long)a0 revisionVersionToken:(id)a1 forEndpointIdentifier:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_loadEndpointIdentifierInformationIfNeeded;
- (void)removeFlushedPlayActivityEventsWithCompletionHandler:(id /* block */)a0;
- (void)getHasPendingPlayEventsForEndpointIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)a0;

@end
