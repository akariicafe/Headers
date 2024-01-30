@interface FramebufferDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) unsigned long long stencilPixelFormat;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRenderPassDescriptor:(id)a0;

@end
