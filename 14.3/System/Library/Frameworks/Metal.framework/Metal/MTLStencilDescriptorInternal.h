@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {
    struct MTLStencilDescriptorPrivate { unsigned long long stencilCompareFunction; unsigned long long stencilFailureOperation; unsigned long long depthFailureOperation; unsigned long long depthStencilPassOperation; unsigned int readMask; unsigned int writeMask; } _private;
}

@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *stencilPrivate;

- (id)formattedDescription:(unsigned long long)a0;
- (unsigned int)readMask;
- (unsigned long long)depthFailureOperation;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)writeMask;
- (void)setReadMask:(unsigned int)a0;
- (void)setWriteMask:(unsigned int)a0;
- (void)setDepthFailureOperation:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setStencilCompareFunction:(unsigned long long)a0;
- (unsigned long long)stencilFailureOperation;
- (void)setStencilFailureOperation:(unsigned long long)a0;
- (unsigned long long)stencilCompareFunction;
- (unsigned long long)depthStencilPassOperation;
- (void)setDepthStencilPassOperation:(unsigned long long)a0;

@end
