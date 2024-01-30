@class SFDevice;

@interface DMTSharingDevice : CATSharingDevice

@property (readonly, nonatomic) SFDevice *sharingDevice;

+ (BOOL)deviceIsPairedAccordingToFlags:(unsigned int)a0;
+ (unsigned long long)devicePairingStateFromSFPairState:(unsigned int)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)underlyingDevice;

@end
