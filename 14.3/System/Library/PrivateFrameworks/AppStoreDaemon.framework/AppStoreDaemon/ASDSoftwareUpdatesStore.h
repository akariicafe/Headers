@class NSString, NSXPCConnection, ASDPromise, NSObject;
@protocol OS_dispatch_queue;

@interface ASDSoftwareUpdatesStore : ASDBaseClient <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
    ASDPromise *_getUpdatesPromise;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)registerBadgeCountNotificationBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setAutoUpdateEnabled:(BOOL)a0;
- (void)dealloc;
- (void)_call:(id)a0 run:(id /* block */)a1 error:(id /* block */)a2;
- (void)showApplicationUpdateBulletin;
- (BOOL)hasEntitlement;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(id /* block */)a0;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (BOOL)autoUpdateEnabled;
- (void)refreshUpdatesWithCompletionBlock:(id)a0 completionBlock:(id /* block */)a1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)a0;
- (BOOL)confirmAgentRequestedUpdateAll;
- (void)getManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)a0;
- (void)reloadManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)getMetricsWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithOrder:(id)a0 completionBlock:(id /* block */)a1;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(id /* block */)a0;
- (void)reloadForSettingsFromServerWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithJobResultsCompletionBlock:(id /* block */)a0;
- (void)_setupConnection;

@end
