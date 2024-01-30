@class ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue;

@interface ASDUpdatesService : NSObject {
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

+ (id)interface;
+ (id)registerBadgeCountNotificationBlock:(id /* block */)a0;
+ (id)defaultService;
+ (id)badgeCount;

- (id)init;
- (void).cxx_destruct;
- (void)setAutoUpdateEnabled:(BOOL)a0;
- (void)dealloc;
- (BOOL)hasEntitlement;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)showApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (id)_initWithServiceBroker:(id)a0;
- (BOOL)autoUpdateEnabled;
- (void)refreshUpdatesWithCompletionBlock:(id)a0 completionBlock:(id /* block */)a1;
- (id)_failedJobResultsForBundleIDs:(id)a0;
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

@end
