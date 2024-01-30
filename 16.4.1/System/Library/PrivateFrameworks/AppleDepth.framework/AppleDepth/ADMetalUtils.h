@interface ADMetalUtils : NSObject

+ (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 plane:(unsigned long long)a4 metalDevice:(id)a5 error:(id *)a6;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 metalDevice:(id)a1;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 textureSize:(struct CGSize { double x0; double x1; })a2 plane:(unsigned long long)a3 metalDevice:(id)a4 error:(id *)a5;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 plane:(unsigned long long)a1 metalDevice:(id)a2 error:(id *)a3;
+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)a0;
+ (void)dispatchCommandEncoder:(id)a0 pipeline:(id)a1 width:(unsigned int)a2 height:(unsigned int)a3;
+ (unsigned long long)getMTLPixelFormat:(unsigned int)a0;
+ (id)textureForSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1 metalDevice:(id)a2;

@end
