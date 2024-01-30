@class MTLDepthStencilDescriptor;

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState

@property (readonly, nonatomic) MTLDepthStencilDescriptor *descriptor;
@property (readonly, nonatomic) unsigned char attachmentWriteMask;

+ (id)newDepthStencilStateWithBaseObject:(id)a0 device:(id)a1 descriptor:(id)a2;

- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)description;
- (id)_initWithBaseDepthStencilState:(id)a0 device:(id)a1 descriptor:(id)a2;

@end
