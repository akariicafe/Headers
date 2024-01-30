@class NSMutableSet;

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>

@property (retain, nonatomic) NSMutableSet *supportedAudioPayloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPayload:(int)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
