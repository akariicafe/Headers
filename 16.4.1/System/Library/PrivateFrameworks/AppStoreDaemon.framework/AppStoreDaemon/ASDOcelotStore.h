@class NSString, ASDServiceBroker;

@interface ASDOcelotStore : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;

- (void)topAppsForAccount:(id)a0 completionBlock:(id /* block */)a1;
- (void)recordMetricsWithCompletionBlock:(id /* block */)a0;
- (void)subscriptionDetailsWithCompletionBlock:(id /* block */)a0;
- (void)getAppPayoutEventsWithCompletionBlock:(id /* block */)a0;
- (void)resetPayoutWithCompletionBlock:(id /* block */)a0;
- (void)sbsyncIfSubscribedWithAccount:(id)a0 completionBlock:(id /* block */)a1;
- (void)flushMetricsWithCompletionBlock:(id /* block */)a0;
- (void)subscriptionStateWithCompletionBlock:(id /* block */)a0;
- (void)sendPayoutWithCompletionBlock:(id /* block */)a0;
- (void)sendSummaryWithCompletionBlock:(id /* block */)a0;
- (void)sbsyncWithDuration:(id)a0 completionBlock:(id /* block */)a1;
- (id)init;
- (void)sbsyncWithCompletionBlock:(id /* block */)a0;
- (void)resetSummaryWithCompletionBlock:(id /* block */)a0;
- (void)reportAppEvent:(id)a0 completionBlock:(id /* block */)a1;
- (void)getAppSummaryEventsWithCompletionBlock:(id /* block */)a0;
- (void)recordLaunchesWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
