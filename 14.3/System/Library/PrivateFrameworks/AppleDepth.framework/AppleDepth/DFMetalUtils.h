@interface DFMetalUtils : NSObject

+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 plane:(unsigned long long)a1 metalDevice:(id)a2 error:(id *)a3;
+ (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 plane:(unsigned long long)a4 metalDevice:(id)a5 error:(id *)a6;
+ (id)textureForSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1 metalDevice:(id)a2;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 metalDevice:(id)a1;
+ (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 textureSize:(struct CGSize { double x0; double x1; })a2 plane:(unsigned long long)a3 metalDevice:(id)a4 error:(id *)a5;
+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)a0;

@end
