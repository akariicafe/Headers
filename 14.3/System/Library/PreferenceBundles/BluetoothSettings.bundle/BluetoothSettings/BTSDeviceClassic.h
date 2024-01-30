@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {
    BOOL ctkdDevice;
}

@property (readonly, weak, nonatomic) BluetoothDevice *device;

+ (id)deviceWithDevice:(id)a0;

- (BOOL)connect;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)paired;
- (id)productName;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)unpair;
- (BOOL)ancsAuthorized;
- (id)name;
- (BOOL)magicPaired;
- (BOOL)setUserName:(id)a0;
- (id)identifier;
- (BOOL)isLimitedConnectivityDevice;
- (id)classicDevice;
- (BOOL)isHealthDevice;
- (void)setCtkdDevice:(BOOL)a0;
- (BOOL)isCTKDDevice;
- (BOOL)isMyDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)supportsANCS;
- (BOOL)isTemporaryPairedDevice;

@end
