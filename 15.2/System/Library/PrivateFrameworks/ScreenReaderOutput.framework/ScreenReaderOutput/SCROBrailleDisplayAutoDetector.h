@class CBCentralManager, NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    NSObject<OS_dispatch_source> *_serialSource;
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSMutableArray *_bleIdentifiers;
}

@property (retain) CBCentralManager *centralManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedDetector;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManagerDidUpdateState:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_driverBundleIdentifiers;
- (void)_autodetectIOServices:(id)a0;
- (void)_initializeAutodetectSerialPorts:(id)a0;
- (BOOL)_serialDataMatchesDriver:(id)a0 driverBundleIdentifiers:(id)a1 fileDescriptor:(int)a2;
- (void)serialPortsWerePublished:(unsigned int)a0;
- (void)_detectSerialPorts:(id)a0;
- (id)_serialPortMatchingDictionary;
- (void)_registerForSerialPortNotifications;
- (void)_openSerialPortService:(id)a0 sortedDriverBundleIdentifiers:(id)a1;
- (void)_addDotPadPeripheral:(id)a0 central:(id)a1;
- (BOOL)isAutoDetectEnabled;
- (void)detectDisplays;
- (void)stopDetectingDisplays;
- (void)removeAutodetectBLEIdentifier:(id)a0;
- (void)addAutodetectBLEIdentifier:(id)a0;
- (void)startBLEAutodetect;

@end
