@protocol MTLTexture;

@interface MPSVirtualImage : MPSImage

@property (readonly, nonatomic) id<MTLTexture> texture;

- (unsigned long long)setPurgeableState:(unsigned long long)a0;
- (id)initWithDevice:(id)a0 imageDescriptor:(id)a1;
- (void)synchronizeOnCommandBuffer:(id)a0;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 imageIndex:(unsigned long long)a2;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 bytesPerImage:(unsigned long long)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a5 imageIndex:(unsigned long long)a6;
- (id)initWithTexture:(id)a0 featureChannels:(unsigned long long)a1;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a4 imageIndex:(unsigned long long)a5;
- (void)readBytes:(void *)a0 dataLayout:(unsigned long long)a1 imageIndex:(unsigned long long)a2;
- (void)writeBytes:(const void *)a0 dataLayout:(unsigned long long)a1 bytesPerRow:(unsigned long long)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 featureChannelInfo:(struct { unsigned long long x0; unsigned long long x1; })a4 imageIndex:(unsigned long long)a5;

@end
