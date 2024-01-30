@class NSNumber;

@interface NRBluetoothLinkPreferences : NRLinkPreferences

@property (retain, nonatomic) NSNumber *inputBytesPerSecond;
@property (retain, nonatomic) NSNumber *outputBytesPerSecond;
@property (retain, nonatomic) NSNumber *packetsPerSecond;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isNotEmpty;
- (id)copyShortDescription;
- (id)copyEncodedXPCDict;
- (id)copyLongDescription;

@end
