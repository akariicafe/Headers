@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState

@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor;

- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithSamplerState:(id)a0 descriptor:(id)a1 device:(id)a2;

@end
