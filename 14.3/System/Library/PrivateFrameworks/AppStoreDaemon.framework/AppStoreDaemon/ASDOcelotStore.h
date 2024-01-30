@class NSString, ASDServiceBroker;

@interface ASDOcelotStore : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (void)subscriptionStateWithCompletionBlock:(id /* block */)a0;
- (id)init;
- (void)getAppPayoutEventsWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)sbsyncIfSubscribedWithAccount:(id)a0 completionBlock:(id /* block */)a1;
- (void)getAppSummaryEventsWithCompletionBlock:(id /* block */)a0;
- (void)resetPayoutWithCompletionBlock:(id /* block */)a0;
- (void)sendPayoutWithCompletionBlock:(id /* block */)a0;
- (void)recordMetricsWithCompletionBlock:(id /* block */)a0;
- (void)subscriptionDetailsWithCompletionBlock:(id /* block */)a0;
- (void)sendSummaryWithCompletionBlock:(id /* block */)a0;
- (void)sbsyncWithCompletionBlock:(id /* block */)a0;
- (void)flushMetricsWithCompletionBlock:(id /* block */)a0;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)a0;
- (void)resetSummaryWithCompletionBlock:(id /* block */)a0;
- (id)_initWithServiceBroker:(id)a0;
- (void)reportAppEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)sbsyncWithDuration:(id)a0 completionBlock:(id /* block */)a1;
- (void)topAppsForAccount:(id)a0 completionBlock:(id /* block */)a1;

@end
