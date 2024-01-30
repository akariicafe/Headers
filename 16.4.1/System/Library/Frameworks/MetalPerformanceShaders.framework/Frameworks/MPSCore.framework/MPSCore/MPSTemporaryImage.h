@interface MPSTemporaryImage : MPSImage

@property (nonatomic) unsigned long long readCount;

+ (id)temporaryImageWithCommandBuffer:(id)a0 textureDescriptor:(id)a1 featureChannels:(unsigned long long)a2;
+ (id)temporaryImageWithCommandBuffer:(id)a0 textureDescriptor:(id)a1;
+ (void)prefetchStorageWithCommandBuffer:(id)a0 imageDescriptorList:(id)a1;
+ (id)temporaryImageWithCommandBuffer:(id)a0 imageDescriptor:(id)a1;
+ (id)defaultAllocator;

- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (id)initWithParentImage:(id)a0 sliceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 featureChannels:(unsigned long long)a2;
- (void)synchronizeOnCommandBuffer:(id)a0;

@end
