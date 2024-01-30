@class NSUUID, NSString, NSArray;
@protocol HMMLogEventSubmitting, HMDSiriEndpointProfileMetricsDispatcherDataSource;

@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>

@property (readonly, copy) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (weak) id<HMDSiriEndpointProfileMetricsDispatcherDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)a0 homeUUID:(id)a1 logEventSubmitter:(id)a2;
- (void)submitRoutineConfigurationEvent;
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)a0;
- (id)fetchAccessorySettingFields;
- (BOOL)dataSourceShouldSubmitRoutineConfigurationEvent;
- (id)dataSourceAccessoryCategoryType;
- (id)dataSourceCompositeSettingsControllerManager;
- (id)dataSourceProfileFields;

@end
