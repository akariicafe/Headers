@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface LKTMetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLLibrary> library;

+ (id)metalContextForDevice:(id)a0 error:(id *)a1;
+ (void)makeResourceCoherent:(id)a0 resource:(id)a1;

- (id)initWithDevice:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 plane:(unsigned long long)a2 error:(id *)a3;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 textureSize:(struct CGSize { double x0; double x1; })a2 plane:(unsigned long long)a3 error:(id *)a4;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 plane:(unsigned long long)a4 error:(id *)a5;

@end
