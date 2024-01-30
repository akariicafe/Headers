@interface BTSDevice : NSObject

@property (nonatomic, getter=isHealthDevice) BOOL healthDevice;
@property (readonly, nonatomic, getter=isMyDevice) BOOL myDevice;
@property (nonatomic, getter=isCTKDDevice) BOOL ctkdDevice;
@property (nonatomic, getter=isManagedByWallet) BOOL managedByWallet;

- (BOOL)connect;
- (long long)compare:(id)a0;
- (BOOL)isiPad;
- (id)productName;
- (id)identifier;
- (BOOL)ancsAuthorized;
- (void)unpair;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (unsigned long long)hash;
- (BOOL)paired;
- (id)classicDevice;
- (BOOL)isLimitedConnectivityDevice;
- (BOOL)isFirmwareUpdateRequiredDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;
- (BOOL)isTemporaryPairedDevice;

@end
