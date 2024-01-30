@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; } *depthStencilPrivate;

- (void)setDepthWriteEnabled:(BOOL)a0;
- (BOOL)isDepthWriteEnabled;
- (unsigned long long)depthCompareFunction;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)frontFaceStencil;
- (void)setFrontFaceStencil:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)label;
- (id)description;
- (id)backFaceStencil;
- (void)setLabel:(id)a0;
- (void)setBackFaceStencil:(id)a0;
- (void)setDepthCompareFunction:(unsigned long long)a0;

@end
