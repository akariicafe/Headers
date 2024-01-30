@class HDPeriodicActivity, NSString, HDProfile, NSObject, HDMCAnalysisManager;
@protocol OS_dispatch_queue;

@interface HDMCAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    HDMCAnalysisManager *_analysisManager;
    HDPeriodicActivity *_activity;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void).cxx_destruct;
- (void)_queue_submitAnalyticsWithActivityCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 analysisManager:(id)a1;
- (double)_submissionInterval;
- (void)daemonReady:(id)a0;
- (double)_retryInterval;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)_queue_performActivityWithCompletion:(id /* block */)a0;

@end
