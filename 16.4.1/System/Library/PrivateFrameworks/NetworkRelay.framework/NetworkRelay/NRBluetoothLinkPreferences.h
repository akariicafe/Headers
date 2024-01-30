@class NSNumber;

@interface NRBluetoothLinkPreferences : NRLinkPreferences

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL reportedToABC;
@property (retain, nonatomic) NSNumber *inputBytesPerSecond;
@property (retain, nonatomic) NSNumber *outputBytesPerSecond;
@property (retain, nonatomic) NSNumber *packetsPerSecond;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isNotEmpty;
- (id)copyShortDescription;
- (void)combinePreferences:(id)a0;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;

@end
