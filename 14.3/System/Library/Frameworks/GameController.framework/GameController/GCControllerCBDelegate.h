@class NSString, CBCentralManager, NSMutableArray;

@interface GCControllerCBDelegate : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    NSMutableArray *_foundPeripherals;
    NSMutableArray *_connectedPeripherals;
}

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopScan;
- (void)centralManager:(id)a0 didDiscoverPeripheral:(id)a1 advertisementData:(id)a2 RSSI:(id)a3;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)centralManager:(id)a0 didDisconnectPeripheral:(id)a1 error:(id)a2;
- (void)centralManager:(id)a0 didRetrievePeripherals:(id)a1;
- (void)centralManager:(id)a0 didRetrieveConnectedPeripherals:(id)a1;
- (void)centralManager:(id)a0 didConnectPeripheral:(id)a1;
- (void)centralManager:(id)a0 didFailToConnectPeripheral:(id)a1 error:(id)a2;
- (void)startScan;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverIncludedServicesForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverDescriptorsForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForDescriptor:(id)a1 error:(id)a2;
- (void)fireCompletionHandler;
- (void)startScanWithTimeout:(double)a0;

@end
