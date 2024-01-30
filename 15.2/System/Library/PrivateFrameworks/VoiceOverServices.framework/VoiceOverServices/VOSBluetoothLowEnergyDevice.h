@class NSString, CBPeripheral, CBCentralManager;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice>

@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (long long)compare:(id)a0;
- (id)identifier;
- (id)address;
- (void)unpair;
- (void)disconnect;
- (BOOL)connected;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (BOOL)connecting;
- (BOOL)paired;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;

@end
