@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {
    CBPeripheral *_peripheral;
    CBCentralManager *_centralManager;
    BOOL healthDevice;
    BOOL ctkdDevice;
    BOOL managedByWallet;
}

+ (id)deviceWithPeripheral:(id)a0 manager:(id)a1;

- (BOOL)connect;
- (id)productName;
- (id)identifier;
- (BOOL)ancsAuthorized;
- (void)unpair;
- (void)disconnect;
- (BOOL)connected;
- (id)description;
- (BOOL)setUserName:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (BOOL)paired;
- (id)classicDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isHealthDevice;
- (void)setHealthDevice:(BOOL)a0;
- (void)setManagedByWallet:(BOOL)a0;
- (BOOL)supportsCTKD;
- (void)setCtkdDevice:(BOOL)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isManagedByWallet;
- (BOOL)isMyDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;
- (id)initWithPeripheral:(id)a0 manager:(id)a1;

@end
