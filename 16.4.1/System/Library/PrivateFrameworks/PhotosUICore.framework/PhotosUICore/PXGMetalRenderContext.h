@protocol MTLCommandQueue, MTLDevice;

@interface PXGMetalRenderContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) BOOL wantsIOSurfaceTextures;

+ (id)privateContextWithDevice:(id)a0;
+ (id)privateContextWithDevice:(id)a0 commandQueue:(id)a1;
+ (id)sharedContextWithDevice:(id)a0 commandQueue:(id)a1;

- (void)fastCopyBytes:(const void *)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 length:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (id)newTextureWithDescriptor:(id)a0;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1;
- (void)copyBytes:(const void *)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 length:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void).cxx_destruct;
- (id)newMipmappedTextureFromTexture:(id)a0;
- (void)_blitFromBuffer:(id)a0 toTexture:(id)a1 inRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 bytesPerRow:(unsigned long long)a3 offset:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;
- (void)_blitFromTexture:(id)a0 toTexture:(id)a1 mipmapped:(BOOL)a2;

@end
