@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState

@property (readonly, copy, nonatomic) MTLSamplerDescriptor *descriptor;

+ (id)newSamplerStateWithBaseObject:(id)a0 device:(id)a1 descriptor:(id)a2;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (id)_initWithBaseSamplerState:(id)a0 device:(id)a1 descriptor:(id)a2;

@end
