@class NSNotificationCenter, NSString, BMStreamDatastorePruner, BMSource, NSSet, NSDictionary, HMDLogEventDailyScheduler, BMStoreConfig, NSObject, BMStoreStream, NSMapTable, HMDHome;
@protocol OS_dispatch_queue, HMMLogEventSubmitting;

@interface HMDHomeLightBrightnessLogger : HMFObject <HMFLogging, HMDDevicePreferenceDataSource, HMMLogEventObserver, HMDLogEventDailyTaskRunner>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSMapTable *notificationEnabledCharacteristicsByAccessory;
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) NSString *clientIdentifier;
@property (nonatomic) unsigned long long eventOrder;
@property (readonly) BMStreamDatastorePruner *pruner;
@property (readonly) BMStoreConfig *biomeStoreConfig;
@property (readonly) BOOL isBiomeDonationEnabled;
@property (readonly) BOOL isCoreAnalyticsSubmissionEnabled;
@property (readonly, nonatomic) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property (readonly, nonatomic) NSSet *hmServiceTypesToCollect;
@property (readonly, nonatomic) NSDictionary *characteristicTypesToCollectForHMServiceType;
@property (readonly) BMSource *source;
@property (readonly) BMStoreStream *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)handleDifferentType:(id)a0;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)configureLogger;
- (void)submitCoreAnalyticsEventForMotionSensor:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4 triggerSource:(id)a5 bundleId:(id)a6 userUUID:(id)a7;
- (id)brightnessSensorsValue;
- (id)findCharacteristicsToRegisterForNotificationsFromHAPAccessory:(id)a0;
- (id)generateTimeStampUpToMinute;
- (id)generateTimeStampUpToSecond;
- (id)getApproximateCurrentLocationRange;
- (void)handleAccessoryAdded:(id)a0;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleCharacteristicWriteLogEvent:(id)a0;
- (void)handleCharacteristicsValueUpdated:(id)a0;
- (void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)a0;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (id)initWithHome:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2 workQueue:(id)a3;
- (id)initWithHome:(id)a0 logEventSubmitter:(id)a1 dailyScheduler:(id)a2 workQueue:(id)a3 shouldDonateToBiome:(BOOL)a4 shouldSubmitToCoreAnalytics:(BOOL)a5;
- (void)processCharacteristicsAndSubmitCoreAnalyticsEvents:(id)a0 subscriptionEventType:(unsigned long long)a1 triggerSource:(id)a2 bundleId:(id)a3 userUUID:(id)a4;
- (void)runDailyTask;
- (void)submitCoreAnalyticsEventForBrightness:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 eventOrder:(long long)a4 homePresence:(BOOL)a5 luxLevel:(id)a6 triggerSource:(id)a7 bundleId:(id)a8 userUUID:(id)a9;
- (void)submitCoreAnalyticsEventForDoors:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4 triggerSource:(id)a5 bundleId:(id)a6 userUUID:(id)a7;
- (void)submitCoreAnalyticsEventForGarageDoorOpener:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4 triggerSource:(id)a5 bundleId:(id)a6 userUUID:(id)a7;
- (void)submitCoreAnalyticsEventForHumiditySensorCharacteristicValue:(id)a0 accessoryUUIDString:(id)a1 serviceUUIDString:(id)a2 characteristicUUIDString:(id)a3 homeUUID:(id)a4 homePresence:(BOOL)a5 subscriptionEventTypeString:(id)a6 triggerSource:(id)a7 bundleId:(id)a8 userUUID:(id)a9;
- (void)submitCoreAnalyticsEventForLocks:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4 triggerSource:(id)a5 bundleId:(id)a6 userUUID:(id)a7;
- (void)submitCoreAnalyticsEventForTemperatureSensorCharacteristicValue:(id)a0 accessoryUUIDString:(id)a1 serviceUUIDString:(id)a2 characteristicUUIDString:(id)a3 homeUUID:(id)a4 homePresence:(BOOL)a5 subscriptionEventTypeString:(id)a6 triggerSource:(id)a7 bundleId:(id)a8 userUUID:(id)a9;
- (void)submitCoreAnalyticsEventForThermostatCharacteristicValue:(id)a0 accessoryUUIDString:(id)a1 serviceUUIDString:(id)a2 characteristicUUIDString:(id)a3 homeUUID:(id)a4 homePresence:(BOOL)a5 subscriptionEventTypeString:(id)a6 triggerSource:(id)a7 bundleId:(id)a8 userUUID:(id)a9;

@end
