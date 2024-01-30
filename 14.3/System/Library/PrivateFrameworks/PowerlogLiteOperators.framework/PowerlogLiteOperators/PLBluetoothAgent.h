@class NSString, NSMutableDictionary, PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, NSDate;

@interface PLBluetoothAgent : PLAgent {
    BOOL keepSessionAlive;
    struct BTSessionImpl { } *session;
    struct BTLocalDeviceImpl { } *localBluetoothDevice;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLEntryNotificationOperatorComposition *sbcChanged;
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

+ (void)load;
+ (id)defaults;
+ (id)entryEventBackwardDefinitionEnhancedPowerProfileStats;
+ (BOOL)shouldLogEnhancedStats;
+ (id)entryEventBackwardDefinitionMaxDutyCycle;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)getScanCoreKeys;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)logEventForwardPairedDevices;
- (id)init;
- (void)attachSession;
- (void)logEventForwardDeviceState;
- (void).cxx_destruct;
- (void)bluetoothDeviceEvent:(int)a0 onDevice:(struct BTLocalDeviceImpl { } *)a1 withResult:(int)a2;
- (void)logEventIntervalConnectedDevices;
- (BOOL)isDiscoverable;
- (void)dealloc;
- (void)logEventIntervalHCIRawData:(id)a0;
- (void)logwithBTOnCheck;
- (void)modelBluetoothPower:(id)a0;
- (void)log;
- (void)sessionAttached:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (id)advertisingDataDescription:(const char *)a0 :(unsigned long long)a1;
- (void)logEventIntervalLeConnectedDevices:(id)a0 withRequest:(BOOL)a1;
- (BOOL)modulePowered;
- (void)logEventIntervalWakeVSE:(id)a0;
- (BOOL)isConnected;
- (id)btHardwareChipsetQuery;
- (void)logEventBackwardMaxDutyCycle:(id)a0;
- (struct BTLocalDeviceImpl { } *)localBluetoothDevice;
- (void)sessionTerminated:(struct BTSessionImpl { } *)a0 withResult:(int)a1;
- (void)logEventBackwardA2DP:(id)a0;
- (void)logEventBackwardHFP:(id)a0;
- (void)logEventBackwardPowerProfileStats;
- (BOOL)bluetoothPresent;
- (void)logEventBackwardWirelessProximity:(id)a0;
- (void)bluetoothSessionEvent:(int)a0 onSession:(struct BTSessionImpl { } *)a1 withResult:(int)a2;
- (void)modelBluetoothOffPower;
- (void)initOperatorDependancies;
- (BOOL)isConnectable;

@end
