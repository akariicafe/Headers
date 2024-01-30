@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {
    BOOL ctkdDevice;
    BOOL managedByWallet;
    BOOL supportsBackgroundNI;
}

@property (readonly, weak, nonatomic) BluetoothDevice *device;

+ (id)deviceWithDevice:(id)a0;

- (BOOL)paired;
- (BOOL)connected;
- (id)initWithDevice:(id)a0;
- (BOOL)connect;
- (void)disconnect;
- (id)productName;
- (id)identifier;
- (BOOL)setUserName:(id)a0;
- (BOOL)ancsAuthorized;
- (void).cxx_destruct;
- (id)name;
- (BOOL)magicPaired;
- (void)unpair;
- (BOOL)isHIDDevice;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)doesSupportBackgroundNI;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isHealthDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isManagedByWallet;
- (BOOL)isMyDevice;
- (BOOL)isTemporaryPairedDevice;
- (void)setCtkdDevice:(BOOL)a0;
- (void)setManagedByWallet:(BOOL)a0;
- (void)setSupportsBackgroundNI:(BOOL)a0;
- (BOOL)supportsANCS;

@end
