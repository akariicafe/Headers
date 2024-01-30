@class NSString, NSMutableDictionary, NSDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACCPlatformPluginBatteryPackAnalytics : NSObject <ACCPlatformBatteryPackAnalyticsPluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (nonatomic) struct __CFRunLoopSource { } *powerSourcesChangedRunLoopSource;
@property (nonatomic) struct __CFRunLoopSource { } *accessoriesChangedRunLoopSource;
@property (nonatomic) struct __CFRunLoopSource { } *accessoriesLimitedPowerRunLoopSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSNumber *batteryPackCurrentCapacity;
@property (retain, nonatomic) NSNumber *batteryPackMaxCapacity;
@property (retain, nonatomic) NSNumber *deviceBatteryCurrentCapacity;
@property (retain, nonatomic) NSNumber *deviceBatteryMaxCapacity;
@property (retain, nonatomic) NSString *batteryPackAccessoryName;
@property (retain, nonatomic) NSString *batteryPackAccessoryManufacturer;
@property (retain, nonatomic) NSString *batteryPackAccessoryModel;
@property (retain, nonatomic) NSString *batteryPackAccessoryHardwareVersion;
@property (retain, nonatomic) NSString *batteryPackAccessorySoftwareVersion;
@property (retain, nonatomic) NSString *batteryPackPowerSource;
@property (retain, nonatomic) NSString *oldBatteryPackPowerSource;
@property (retain, nonatomic) NSNumber *batteryPackPowerSourceVoltage;
@property (retain, nonatomic) NSNumber *oldBatteryPackPowerSourceVoltage;
@property (retain, nonatomic) NSString *connectedBatteryPackKey;
@property (nonatomic) unsigned long long batteryPackConnectedTimestamp;
@property (nonatomic) unsigned long long batteryPackChargeSourceConnectedTimestamp;
@property (nonatomic) int batteryPackConnectionState;
@property (nonatomic) unsigned long long wiredChargeTime;
@property (nonatomic) unsigned long long qiChargeTime;
@property (nonatomic) unsigned long long inductiveChargeTime;
@property (nonatomic) unsigned long long onBatteryTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *batteryPackPendingConnectionTimerSource;
@property (nonatomic) unsigned int batteryPackIOService;
@property (retain, nonatomic) NSMutableDictionary *batteryPackAnalyticsDictionary;
@property (retain, nonatomic) NSNumber *batteryPackChargeAmperage;
@property (retain, nonatomic) NSDictionary *batteryPackDetails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (void).cxx_destruct;
- (void)queue_handlePowerSourceChange;
- (void)trimBatteryPackAnalyticsDictionary;
- (void)commitPersistentBatteryPackAnalyticsDictionary;
- (void)initPersistentBatteryPackAnalyticsDictionary;
- (void)startBatteryPackAnalytics;
- (void)cleanBatteryPackAnalyticsInternals;
- (void)handlePowerSourceChange;
- (int)chargePercentForCurrentCapacity:(id)a0 andMaxCapacity:(id)a1 updateZeroValue:(BOOL)a2;
- (BOOL)handleBatteryPackDetach;
- (void)handleBatteryPackStateChange:(id)a0;
- (void)queue_performUpdateWithPowerSourcesBlob:(void *)a0 andPowerSourcesList:(struct __CFArray { } *)a1;
- (BOOL)handleBatteryPackAttach;
- (void)stopBatteryPackAnalytics;
- (void)handleBatteryPackPowerSourceChange;

@end
