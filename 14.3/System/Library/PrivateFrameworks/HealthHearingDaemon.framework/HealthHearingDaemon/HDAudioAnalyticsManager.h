@class HDPeriodicActivity, NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDAudioAnalyticsManager : NSObject <HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) double calculationPeriod;
@property (readonly, nonatomic) double retryPeriod;
@property (retain, nonatomic) HDPeriodicActivity *periodicActivity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)performPeriodicActivity:(id)a0 completion:(id /* block */)a1;
- (BOOL)periodicActivityRequiresProtectedData:(id)a0;
- (id)capturePhoneAnalytics;
- (void).cxx_destruct;
- (void)daemonReady:(id)a0;
- (BOOL)_recordedDataForToday;
- (id)_dayForDate:(id)a0;
- (BOOL)_dayComponents:(id)a0 lessThan:(id)a1;
- (void)periodicActivity:(id)a0 configureXPCActivityCriteria:(id)a1;
- (id)lastSuccessfulCalculation;

@end
