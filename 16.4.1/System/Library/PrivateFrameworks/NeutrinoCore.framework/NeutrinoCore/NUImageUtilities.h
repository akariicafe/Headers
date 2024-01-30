@interface NUImageUtilities : NSObject

+ (void)copyPixelsFromImage:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 destPtr:(void *)a2 destPtrRowBytes:(long long)a3;
+ (void)copyPixelsFromImage:(id)a0 srcRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 destImage:(id)a2 destOrigin:(struct { long long x0; long long x1; })a3;
+ (void)copyPixelsToImage:(id)a0 atPoint:(struct { long long x0; long long x1; })a1 fromBuffer:(id)a2 inRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a3;
+ (void)copyPixelsToImage:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 srcPtr:(const void *)a2 srcPtrRowBytes:(long long)a3;
+ (long long)alignedRowBytesForWidth:(long long)a0 bytesPerPixel:(long long)a1;
+ (void)copyBuffer:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toBuffer:(id)a2 atPoint:(struct { long long x0; long long x1; })a3;
+ (void)copyPixelsFromImage:(id)a0 atPoint:(struct { long long x0; long long x1; })a1 toBuffer:(id)a2;
+ (void)copyPixelsFromSurfaceImage:(id)a0 atPoint:(struct { long long x0; long long x1; })a1 toBuffer:(id)a2;
+ (void)copyPixelsFromSurfaceImage:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 destPtr:(void *)a2 destPtrRowBytes:(long long)a3;
+ (void)copySurfaceImage:(id)a0 toImage:(id)a1;
+ (void)copyTexture:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toSurfaceImage:(id)a2 atPoint:(struct { long long x0; long long x1; })a3 withDevice:(id)a4;
+ (void)fillPixelsInBuffer:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 srcPixel:(const void *)a2;
+ (void)fillPixelsInImage:(id)a0 rect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 srcPixel:(const void *)a2;
+ (void)renderImage:(id)a0 toSurface:(id)a1 atPoint:(struct { long long x0; long long x1; })a2 withContext:(id)a3 andColorSpace:(id)a4;

@end
