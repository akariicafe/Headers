@interface BTSDevice : NSObject

@property (nonatomic, getter=isHealthDevice) BOOL healthDevice;
@property (readonly, nonatomic, getter=isMyDevice) BOOL myDevice;
@property (nonatomic, getter=isCTKDDevice) BOOL ctkdDevice;

- (BOOL)connect;
- (void)disconnect;
- (BOOL)connected;
- (BOOL)paired;
- (id)productName;
- (void)unpair;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)ancsAuthorized;
- (BOOL)isEqual:(id)a0;
- (BOOL)isiPad;
- (id)name;
- (id)identifier;
- (BOOL)isLimitedConnectivityDevice;
- (id)classicDevice;
- (BOOL)cloudPaired;
- (BOOL)isApplePencil:(int *)a0;
- (void)setANCSAuthorization:(BOOL)a0;
- (BOOL)supportsANCS;
- (BOOL)isTemporaryPairedDevice;

@end
