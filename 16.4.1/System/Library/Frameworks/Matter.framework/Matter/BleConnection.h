@class CBCentralManager, CBUUID, CBPeripheral, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BleConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (retain, nonatomic) CBUUID *shortServiceUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableDictionary *cachedPeripherals;
@property (nonatomic) BOOL hasDeviceDiscriminator;
@property (nonatomic) BOOL found;
@property (nonatomic) struct SetupDiscriminator { unsigned short mDiscriminator : 12; unsigned char mIsShortDiscriminator : 1; } deviceDiscriminator;
@property (nonatomic) void *appState;
@property (nonatomic) void /* function */ *onConnectionComplete;
@property (nonatomic) void /* function */ *onConnectionError;
@property (nonatomic) struct BleLayer { int x0; void *x1; struct BleLayerDelegate *x2; void /* function */ *x3; struct BleConnectionDelegate *x4; struct BlePlatformDelegate *x5; struct BleApplicationDelegate *x6; struct Layer *x7; } *mBleLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fillServiceWithCharacteristicUuids:(id)a0 svcId:(struct ChipBleUUID { unsigned char x0[16]; } *)a1 charId:(struct ChipBleUUID { unsigned char x0[16]; } *)a2;

- (void)connect:(id)a0;
- (void)resetTimer;
- (void)disconnect;
- (id).cxx_construct;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)update;
- (void)startScanning;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)stopScanning;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (BOOL)checkDiscriminator:(unsigned short)a0;
- (void)dispatchConnectionComplete:(id)a0;
- (void)dispatchConnectionError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0;
- (BOOL)hasDiscriminator;
- (id)initWithDiscriminator:(const struct SetupDiscriminator { unsigned short x0 : 12; unsigned char x1 : 1; } *)a0;
- (void)setBleLayer:(struct BleLayer { int x0; void *x1; struct BleLayerDelegate *x2; void /* function */ *x3; struct BleConnectionDelegate *x4; struct BlePlatformDelegate *x5; struct BleApplicationDelegate *x6; struct Layer *x7; } *)a0;
- (void)updateWithDiscriminator:(const struct SetupDiscriminator { unsigned short x0 : 12; unsigned char x1 : 1; } *)a0;

@end
