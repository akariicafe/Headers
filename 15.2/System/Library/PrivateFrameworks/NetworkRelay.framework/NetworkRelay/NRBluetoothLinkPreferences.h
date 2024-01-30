@class NSNumber;

@interface NRBluetoothLinkPreferences : NRLinkPreferences

@property (retain, nonatomic) NSNumber *inputBytesPerSecond;
@property (retain, nonatomic) NSNumber *outputBytesPerSecond;
@property (retain, nonatomic) NSNumber *packetsPerSecond;

- (BOOL)isNotEmpty;
- (id)copyShortDescription;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;

@end
