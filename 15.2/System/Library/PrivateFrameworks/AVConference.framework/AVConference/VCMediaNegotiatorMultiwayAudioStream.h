@class NSMutableSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>

@property (retain, nonatomic) NSMutableSet *supportedAudioPayloads;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addPayload:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
