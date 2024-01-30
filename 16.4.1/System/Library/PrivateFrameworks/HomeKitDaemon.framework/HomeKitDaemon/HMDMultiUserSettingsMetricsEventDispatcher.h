@class NSUUID, NSString, HMDLogEventDailyScheduler;
@protocol HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *dailyScheduler;
@property (weak) id<HMDMultiUserSettingsMetricsEventDispatcherDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2;
- (void)registerForDailyMultiUserSettingsEvents;
- (void)runDailyTask;
- (void)submitMultiUserSettingsDailyEvent;

@end
