@class SPBeaconManager, NSString, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSDate;

@interface PLBluetoothAgent : PLAgent {
    BOOL keepSessionAlive;
    struct BTSessionImpl { } *session;
    struct BTLocalDeviceImpl { } *localBluetoothDevice;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (readonly) NSString *btHardwareChipset;
@property (retain) PLXPCListenerOperatorComposition *leConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIListener;
@property (retain) PLXPCListenerOperatorComposition *btA2DPListener;
@property (retain) PLXPCListenerOperatorComposition *btHFPListener;
@property (retain) PLXPCListenerOperatorComposition *btHCIVSEListener;
@property (retain) PLXPCListenerOperatorComposition *wirelessProxListener;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;
@property (retain) NSDate *lastPowerEntryDate;
@property unsigned char logCount;
@property (retain) NSMutableDictionary *ENScanCache;
@property (retain) PLXPCListenerOperatorComposition *ENListener;
@property (retain) SPBeaconManager *beaconManager;
@property (retain) PLXPCListenerOperatorComposition *magnetListener;
@property (retain) PLXPCListenerOperatorComposition *magnetOperationListener;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)getScanCoreKeys;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventForwardDefinitions;
+ (void)load;

- (BOOL)isDiscoverable;
- (void)logEventIntervalWakeVSE:(id)a0;
- (void)logEventPointMagnetOperation:(id)a0;
- (void)logEventIntervalHCIRawData:(id)a0;
- (struct BTLocalDeviceImpl { } *)localBluetoothDevice;
- (void)modelBluetoothOffPower;
- (void)logEventForwardPairedDevices;
- (void)logwithBTOnCheck;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)log;
- (void)logEventBackwardA2DP:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logEventBackwardPowerProfileStats;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (BOOL)isConnected;
- (id)btHardwareChipsetQuery;
- (void)logEventBackwardHFP:(id)a0;
- (BOOL)isConnectable;
- (void)logEventIntervalConnectedDevices;
- (void)logEventPointMagnet:(id)a0;
- (void)sessionTerminated:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)dealloc;
- (void)logEventForwardDeviceState;
- (void)modelBluetoothPower:(id)a0;
- (void)attachSession;
- (void)bluetoothDeviceEvent:(int)a0 onDevice:(struct BTLocalDeviceImpl { } *)a1 withResult:(int)a2;
- (void)logEventBackwardMaxDutyCycle:(id)a0;
- (void)sessionAttached:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (BOOL)modulePowered;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)initOperatorDependancies;
- (void)bluetoothSessionEvent:(int)a0 onSession:(struct BTSessionImpl { } *)a1 withResult:(int)a2;
- (BOOL)bluetoothPresent;

@end
