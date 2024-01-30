@class NSString, CBPeripheral, CBCentralManager;

@interface VOSBluetoothLowEnergyDevice : NSObject <VOSBluetoothConnectableDevice>

@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) CBCentralManager *centralManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connect;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)paired;
- (void).cxx_destruct;
- (void)unpair;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (id)identifier;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;
- (BOOL)connecting;

@end
