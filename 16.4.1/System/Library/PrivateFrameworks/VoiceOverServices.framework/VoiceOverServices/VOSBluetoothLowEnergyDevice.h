@class NSString, CBPeripheral, CBCentralManager;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice>

@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)paired;
- (BOOL)connected;
- (void)connect;
- (void)disconnect;
- (BOOL)connecting;
- (id)identifier;
- (id)address;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)unpair;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;

@end
