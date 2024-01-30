@class NSString, MTLStencilDescriptorInternal;

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {
    struct MTLDepthStencilDescriptorPrivate { MTLStencilDescriptorInternal *frontFaceStencil; MTLStencilDescriptorInternal *backFaceStencil; unsigned long long depthCompareFunction; BOOL depthWriteEnabled; NSString *label; } _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; } *depthStencilPrivate;

- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)frontFaceStencil;
- (void)setBackFaceStencil:(id)a0;
- (void)dealloc;
- (id)backFaceStencil;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (BOOL)isDepthWriteEnabled;
- (id)description;
- (void)setFrontFaceStencil:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (void)setDepthCompareFunction:(unsigned long long)a0;
- (void)setDepthWriteEnabled:(BOOL)a0;
- (unsigned long long)depthCompareFunction;

@end
