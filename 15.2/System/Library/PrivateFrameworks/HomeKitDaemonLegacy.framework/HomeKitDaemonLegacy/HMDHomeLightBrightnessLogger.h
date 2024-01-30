@class HMDHome, NSString, NSNotificationCenter, BMStreamDatastorePruner, NSArray, BMStoreStream, NSObject, BMSource, NSMapTable;
@protocol OS_dispatch_queue;

@interface HMDHomeLightBrightnessLogger : HMFObject <HMFLogging, HMDDevicePreferenceDataSource, HMDLogEventDailyProvider>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSMapTable *notificationEnabledCharacteristicsByAccessory;
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly) NSString *clientIdentifier;
@property (readonly) BMStreamDatastorePruner *pruner;
@property (nonatomic) unsigned long long eventOrder;
@property (readonly) BMSource *source;
@property (readonly) BMStoreStream *stream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;

+ (id)logCategory;
+ (id)handleDifferentType:(id)a0;

- (void).cxx_destruct;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1;
- (void)configureLogger;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (void)handleAccessoryAdded:(id)a0;
- (void)handleCharacteristicsValueUpdated:(id)a0;
- (void)submitCoreAnalyticsEventForDoors:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)submitCoreAnalyticsEventForMotionSensor:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)submitCoreAnalyticsEventForLocks:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (void)submitCoreAnalyticsEventForGarageDoorOpener:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 homePresence:(BOOL)a4;
- (id)brightnessSensorsValue;
- (id)generateTimeStampUpToMinute;
- (id)generateTimeStampUpToSecond;
- (void)submitCoreAnalyticsEventForBrightness:(id)a0 accessoryUUID:(id)a1 characteristicUUID:(id)a2 homeUUID:(id)a3 eventOrder:(long long)a4 homePresence:(BOOL)a5 luxLevel:(id)a6;
- (void)readFromBiomeDatabase;
- (void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)a0;

@end
