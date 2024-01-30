@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {
    CBPeripheral *_peripheral;
    CBCentralManager *_centralManager;
    BOOL healthDevice;
    BOOL ctkdDevice;
}

+ (id)deviceWithPeripheral:(id)a0 manager:(id)a1;

- (BOOL)connect;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)paired;
- (id)productName;
- (void).cxx_destruct;
- (void)unpair;
- (id)description;
- (BOOL)ancsAuthorized;
- (id)name;
- (BOOL)setUserName:(id)a0;
- (id)identifier;
- (BOOL)isLimitedConnectivityDevice;
- (id)classicDevice;
- (BOOL)isHealthDevice;
- (void)setHealthDevice:(BOOL)a0;
- (BOOL)supportsCTKD;
- (void)setCtkdDevice:(BOOL)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isMyDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;

@end
