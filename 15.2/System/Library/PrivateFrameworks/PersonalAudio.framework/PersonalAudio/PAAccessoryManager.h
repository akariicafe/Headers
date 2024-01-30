@class CBCentralManager, NSArray, NSMutableDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PAAccessoryManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    BOOL _centralIsOn;
    BOOL _bluetoothAvailable;
}

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) NSArray *peripherals;
@property (retain, nonatomic) NSMutableDictionary *uuidToAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bluetoothCentralQueue;
@property (nonatomic) BOOL shouldSendUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 connectionEventDidOccur:(long long)a1 forPeripheral:(id)a2;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)discoverAccessories;
- (void)sendUpdateToAccessory;
- (void)updateBluetoothAvailability;
- (void)bluetoothAvailabilityDidChange:(id)a0;
- (id)pseCharacteristicForPeripheral:(id)a0;

@end
