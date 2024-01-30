@class HDPeriodicActivity, NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HDRPRespiratoryDailyAnalytics : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>

@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) double calculationPeriod;
@property (readonly, nonatomic) double retryPeriod;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)initWithProfile:(id)a0 featureAvailabilityProvider:(id)a1;
- (long long)_gatherAndSendDailyAnalyticsAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_hasAnalyticsBeenReportedForToday:(id)a0;

@end
