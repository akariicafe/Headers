@interface MTLRenderPassStencilAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) unsigned int clearStencil;
@property (nonatomic) unsigned long long stencilResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
