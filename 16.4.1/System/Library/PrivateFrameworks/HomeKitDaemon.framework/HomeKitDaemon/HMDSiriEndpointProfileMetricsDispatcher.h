@class NSUUID, NSString;
@protocol HMMLogEventSubmitting, HMDSiriEndpointProfileMetricsDispatcherDataSource;

@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject <HMFLogging, HMDLogEventDailyTaskRunner>

@property (readonly, copy) NSUUID *homeUUID;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (weak) id<HMDSiriEndpointProfileMetricsDispatcherDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)dataSourceAccessoryCategoryType;
- (void)submitRoutineConfigurationEvent;
- (id)dataSourceCompositeSettingsControllerManager;
- (id)dataSourceProfileFields;
- (BOOL)dataSourceShouldSubmitRoutineConfigurationEvent;
- (id)fetchAccessorySettingFields;
- (id)initWithAccessoryUUID:(id)a0 homeUUID:(id)a1 logEventSubmitter:(id)a2;
- (void)runDailyTask;
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)a0;

@end
