@class HDPeriodicActivity, HDAssertion, HDProfile, NSString, HKMobilityWalkingSteadinessAnalyticsManager, NSObject;
@protocol OS_dispatch_queue;

@interface HDMobilityWalkingSteadinessAnalyticsDailyEventActivity : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) double calculationPeriod;
@property (readonly, nonatomic) double retryPeriod;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (retain, nonatomic) HDAssertion *preparedDatabaseAccessibilityAssertion;
@property (readonly, nonatomic) HKMobilityWalkingSteadinessAnalyticsManager *analyticsManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (void)_queue_submitAnalyticsWithActivityCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
