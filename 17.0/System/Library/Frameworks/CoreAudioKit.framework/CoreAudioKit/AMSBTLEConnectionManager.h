@class CBCentralManager, NSString, NSTimer, NSMutableArray;
@protocol BTLEConnectionTable;

@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    CBCentralManager *centralManager;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id<BTLEConnectionTable> controller;
    long long centralState;
    BOOL isAdvertising;
}

@property (readonly) NSMutableArray *peripheralList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopScan;
- (void)centralManagerDidUpdateState:(id)a0;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)dealloc;
- (void)startTimer;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (long long)bluetoothState;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)timerFired:(id)a0;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)startScan;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (unsigned int)midiDeviceForUUID:(id)a0;
- (id)amsPeripheralForCBPeripheral:(id)a0;
- (void)checkAlreadyConnectedPeripherals;
- (void)connectionTimerFired:(id)a0;
- (void)createPeripheralList;
- (id)initWithUIController:(id)a0;
- (BOOL)isLECapableHardware;
- (void)killTimer;
- (BOOL)peripheralIsConnectedCentral:(id)a0;
- (void)removeAMSPeripheralForCBPeripheral:(id)a0;
- (void)setUIController:(id)a0;
- (void)updateAdvertisingState:(id)a0;

@end
