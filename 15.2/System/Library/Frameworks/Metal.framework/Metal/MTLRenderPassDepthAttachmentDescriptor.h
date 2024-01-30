@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned long long depthResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
