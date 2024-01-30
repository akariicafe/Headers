@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {
    BOOL ctkdDevice;
    BOOL managedByWallet;
}

@property (readonly, weak, nonatomic) BluetoothDevice *device;

+ (id)deviceWithDevice:(id)a0;

- (BOOL)connect;
- (id)productName;
- (id)identifier;
- (id)initWithDevice:(id)a0;
- (BOOL)ancsAuthorized;
- (void)unpair;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)setUserName:(id)a0;
- (void).cxx_destruct;
- (BOOL)magicPaired;
- (id)name;
- (BOOL)paired;
- (id)classicDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isHealthDevice;
- (void)setManagedByWallet:(BOOL)a0;
- (void)setCtkdDevice:(BOOL)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isManagedByWallet;
- (BOOL)isMyDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)supportsANCS;
- (BOOL)isTemporaryPairedDevice;

@end
