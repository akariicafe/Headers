@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface MetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLLibrary> library;

+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)a0;
+ (void)makeBufferCoherent:(id)a0 buffer:(id)a1;
+ (void)makeTextureCoherent:(id)a0 texture:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)newBufferWithPixelFormat:(unsigned long long)a0 width:(int)a1 data:(const void *)a2;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 plane:(unsigned long long)a4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 plane:(unsigned long long)a2;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 textureSize:(struct CGSize { double x0; double x1; })a2 plane:(unsigned long long)a3;
- (void)copyMTLBufferToMTLTexture:(id)a0 bytesPerRow:(unsigned long long)a1 texture:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 commandQueue:(id)a2;
- (id)newTextureWithPixelFormat:(unsigned long long)a0 width:(int)a1 height:(int)a2;
- (id)readBufferFromFile:(const char *)a0 width:(int)a1 pixelFormat:(unsigned long long)a2;
- (id)readTextureFromFile:(const char *)a0 width:(int)a1 height:(int)a2 pixelFormat:(unsigned long long)a3;
- (unsigned long long)textureBytesPerRow:(int)a0 format:(unsigned long long)a1;
- (int)writeMetalBufferToFile:(const char *)a0 buffer:(id)a1;
- (BOOL)writeMetalTextureToData:(void *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (BOOL)writeMetalTextureToFile:(const char *)a0 texture:(id)a1;
- (BOOL)writeMetalTextureToFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;

@end
