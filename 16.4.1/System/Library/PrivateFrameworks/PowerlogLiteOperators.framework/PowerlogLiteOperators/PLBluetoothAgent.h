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

+ (id)entryEventForwardDefinitions;
+ (id)getScanCoreKeys;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventBackwardWakeupVSE;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (id)entryEventPointDefinitionMagnet;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitionMagnetOperation;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionDetailedPowerProfileStats;
+ (id)entryEventBackwardDefinitionWirelessProxScanDStats;
+ (id)entryEventBackwardDefinitionA2DPPower;
+ (BOOL)shouldLogMarconi;
+ (id)entryEventBackwardDefinitionHCITrace;
+ (id)entryEventBackwardDefinitionPowerProfileStats;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventBackwardDefinitionAHFPPower;

- (void)initOperatorDependancies;
- (BOOL)isDiscoverable;
- (BOOL)isConnected;
- (void)bluetoothDeviceEvent:(int)a0 onDevice:(struct BTLocalDeviceImpl { } *)a1 withResult:(int)a2;
- (void)modelBluetoothPower:(id)a0;
- (void)sessionAttached:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)logEventForwardPairedDevices;
- (void)logwithBTOnCheck;
- (struct BTLocalDeviceImpl { } *)localBluetoothDevice;
- (void)log;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (BOOL)modulePowered;
- (void)modelBluetoothOffPower;
- (void)logEventPointMagnetOperation:(id)a0;
- (id)btHardwareChipsetQuery;
- (BOOL)bluetoothPresent;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void)dealloc;
- (void)logEventBackwardMaxDutyCycle:(id)a0;
- (void)logEventIntervalWakeVSE:(id)a0;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventBackwardPowerProfileStats;
- (void)sessionTerminated:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)attachSession;
- (BOOL)isConnectable;
- (id)init;
- (void)logEventForwardDeviceState;
- (void)bluetoothSessionEvent:(int)a0 onSession:(struct BTSessionImpl { } *)a1 withResult:(int)a2;
- (void)logEventPointMagnet:(id)a0;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)logEventBackwardHFP:(id)a0;
- (void).cxx_destruct;
- (void)logEventIntervalConnectedDevices;
- (void)logEventBackwardA2DP:(id)a0;

@end
