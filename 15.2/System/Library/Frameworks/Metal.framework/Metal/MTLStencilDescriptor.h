@interface MTLStencilDescriptor : NSObject <NSCopying>

@property (readonly) const struct MTLStencilDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; } *stencilPrivate;
@property (nonatomic) unsigned long long stencilCompareFunction;
@property (nonatomic) unsigned long long stencilFailureOperation;
@property (nonatomic) unsigned long long depthFailureOperation;
@property (nonatomic) unsigned long long depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) unsigned int writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
