@class NSString, ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue;

@interface ASDUpdatesService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;
+ (id)registerBadgeCountNotificationBlock:(id /* block */)a0;
+ (id)badgeCount;

- (id)_initWithServiceBroker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasEntitlement;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)showApplicationBadgeForPendingUpdates;
- (BOOL)autoUpdateEnabled;
- (void)dealloc;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (void)setAutoUpdateEnabled:(BOOL)a0;
- (void)refreshUpdatesWithCompletionBlock:(id)a0 completionBlock:(id /* block */)a1;
- (id)_failedJobResultsForBundleIDs:(id)a0;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)a0;
- (BOOL)confirmAgentRequestedUpdateAll;
- (void)getManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)a0;
- (void)reloadManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithOrder:(id)a0 completionBlock:(id /* block */)a1;
- (void)getMetricsWithCompletionBlock:(id /* block */)a0;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(id /* block */)a0;
- (void)reloadForSettingsFromServerWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithJobResultsCompletionBlock:(id /* block */)a0;

@end
