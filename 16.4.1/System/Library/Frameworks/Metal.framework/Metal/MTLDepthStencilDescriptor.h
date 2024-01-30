@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x0; id x1; unsigned long long x2; BOOL x3; id x4; } *depthStencilPrivate;
@property (nonatomic) unsigned long long depthCompareFunction;
@property (nonatomic, getter=isDepthWriteEnabled) BOOL depthWriteEnabled;
@property (copy, nonatomic) MTLStencilDescriptor *frontFaceStencil;
@property (copy, nonatomic) MTLStencilDescriptor *backFaceStencil;
@property (copy, nonatomic) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
