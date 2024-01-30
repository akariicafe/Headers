@class NSUUID, NSString, HMDLogEventDailyScheduler, NSArray;
@protocol HMDMultiUserSettingsMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

@interface HMDMultiUserSettingsMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>

@property (readonly) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMDLogEventDailyScheduler *logEventDailyScheduler;
@property (weak) id<HMDMultiUserSettingsMetricsEventDispatcherDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)triggerLogEventProviderDailySubmissionBlocks;
- (id)initWithIdentifier:(id)a0 logEventSubmitter:(id)a1 logEventDailyScheduler:(id)a2;
- (void)registerForDailyMultiUserSettingsEvents;
- (void)submitMultiUserSettingsDailyEvent;

@end
