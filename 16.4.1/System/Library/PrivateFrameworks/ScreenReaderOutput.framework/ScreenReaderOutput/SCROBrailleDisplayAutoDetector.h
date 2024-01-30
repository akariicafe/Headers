@class CBCentralManager, NSString, NSMutableDictionary, CBPeripheral, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    NSObject<OS_dispatch_source> *_serialSource;
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
    CBPeripheral *_connectedPeripheral;
    NSMutableArray *_bleIdentifiers;
}

@property (retain) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedDetector;

- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (id)init;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)_addBLEPeripheral:(id)a0 central:(id)a1;
- (void)_autodetectIOServices:(id)a0;
- (void)_detectSerialPorts:(id)a0;
- (id)_driverBundleIdentifiers;
- (void)_initializeAutodetectSerialPorts:(id)a0;
- (void)_openSerialPortService:(id)a0 sortedDriverBundleIdentifiers:(id)a1;
- (void)_registerForSerialPortNotifications;
- (BOOL)_serialDataMatchesDriver:(id)a0 driverBundleIdentifiers:(id)a1 fileDescriptor:(int)a2;
- (id)_serialPortMatchingDictionary;
- (void)addAutodetectBLEIdentifier:(id)a0;
- (void)detectDisplays;
- (BOOL)isAutoDetectEnabled;
- (void)removeAutodetectBLEIdentifier:(id)a0;
- (void)serialPortsWerePublished:(unsigned int)a0;
- (void)startBLEAutodetect;
- (void)stopDetectingDisplays;

@end
