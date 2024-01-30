@interface BTSDevice : NSObject

@property (nonatomic, getter=isHealthDevice) BOOL healthDevice;
@property (readonly, nonatomic, getter=isMyDevice) BOOL myDevice;
@property (nonatomic, getter=isCTKDDevice) BOOL ctkdDevice;
@property (nonatomic, getter=isManagedByWallet) BOOL managedByWallet;
@property (nonatomic, getter=doesSupportBackgroundNI) BOOL supportsBackgroundNI;

- (BOOL)paired;
- (BOOL)connected;
- (BOOL)connect;
- (void)disconnect;
- (BOOL)isiPad;
- (id)productName;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (BOOL)ancsAuthorized;
- (id)name;
- (void)unpair;
- (BOOL)isHIDDevice;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isTemporaryPairedDevice;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;

@end
