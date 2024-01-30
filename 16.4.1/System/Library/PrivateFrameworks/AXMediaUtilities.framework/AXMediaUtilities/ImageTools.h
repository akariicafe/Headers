@interface ImageTools : NSObject

+ (id)saveVImageBufferPlanar8ToJPEGData:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 withCompressionQuality:(float)a1 error:(id *)a2;
+ (long long)create420YCbCr8BufferFromPlanar8Buffer:(void *)a0 withWidth:(int)a1 andWithHeight:(int)a2 andWithBytesPerRow:(unsigned long long)a3 toLumaBuffer:(void *)a4 withBytesPerRowLuma:(unsigned long long)a5 andToChromaBuffer:(void *)a6 withBytesPerRowChroma:(unsigned long long)a7;
+ (long long)create420YCbCr8BufferFromRGB8Buffer:(void *)a0 withWidth:(int)a1 andWithHeight:(int)a2 andWithBytesPerRow:(unsigned long long)a3 andAlphaFirst:(BOOL)a4 toLumaBuffer:(void *)a5 withBytesPerRowLuma:(unsigned long long)a6 andToChromaBuffer:(void *)a7 withBytesPerRowChroma:(unsigned long long)a8;
+ (struct CGContext { } *)createARGBBitmapContextWithImage:(struct CGImage { } *)a0;
+ (long long)createRGB8BufferFrom420Y8BiPlanarBuffer:(void *)a0 withBytesPerRowLuma:(unsigned long long)a1 andFrom420CbCr8Buffer:(void *)a2 withBytesPerRowChroma:(unsigned long long)a3 andWithWidth:(int)a4 andWithHeight:(int)a5 andAlphaFirst:(BOOL)a6 toRGB8Buffer:(void *)a7 withBytesPerRowDst:(unsigned long long)a8;
+ (long long)createRGB8BufferFrom420Y8PlanarBuffer:(void *)a0 withBytesPerRowY:(unsigned long long)a1 andFrom420Cb8Buffer:(void *)a2 withBytesPerRowCb:(unsigned long long)a3 andFrom420Cr8Buffer:(void *)a4 withBytesPerRowCr:(unsigned long long)a5 andWithWidth:(int)a6 andWithHeight:(int)a7 andAlphaFirst:(BOOL)a8 toRGB8Buffer:(void *)a9 withBytesPerRowDst:(unsigned long long)a10;
+ (long long)extractLumaFromBGRA8Buffer:(void *)a0 withWidth:(int)a1 andWithHeight:(int)a2 andWithBytesPerRow:(unsigned long long)a3 toBuffer:(void *)a4 withBytesPerRow:(unsigned long long)a5;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })getVImageBufferFromCGImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })getVImageBufferFromCGImageLuma:(struct CGImage { } *)a0 error:(id *)a1;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })getVImageBufferFromCVPixelBuffer:(struct __CVBuffer { } *)a0 channel:(int)a1 error:(id *)a2;
+ (id)getValueForTag:(id)a0 inObject:(id)a1;
+ (id)getValueForTag:(id)a0 inObject:(id)a1 depth:(int)a2 parent:(id)a3;
+ (struct __CFString { } *)guessType:(id)a0;
+ (struct CGImage { } *)loadCGImageEXIFRotatedFromData:(id)a0 error:(id *)a1;
+ (struct CGImage { } *)loadCGImageEXIFRotatedFromSource:(struct CGImageSource { } *)a0 error:(id *)a1;
+ (struct CGImage { } *)loadCGImageEXIFRotatedFromURL:(id)a0 error:(id *)a1;
+ (struct CGImage { } *)loadCGImageFromURL:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)loadCVPixelBuffer420YpCbCr8FromURL:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)loadCVPixelBufferARGB8FromURL:(id)a0 error:(id *)a1;
+ (void *)loadRawBufferFromData:(id)a0 width:(unsigned int *)a1 height:(unsigned int *)a2 rowBytes:(unsigned int *)a3 error:(id *)a4;
+ (void *)loadRawBufferFromURL:(id)a0 width:(unsigned int *)a1 height:(unsigned int *)a2 rowBytes:(unsigned int *)a3 error:(id *)a4;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)loadVImageBufferEXIFRotatedFromData:(id)a0 error:(id *)a1;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)loadVImageBufferEXIFRotatedFromURL:(id)a0 error:(id *)a1;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)loadVImageBufferFromData:(id)a0 isRaw:(BOOL)a1 lumaOnly:(BOOL)a2 error:(id *)a3;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)loadVImageBufferFromURL:(id)a0 lumaOnly:(BOOL)a1 error:(id *)a2;
+ (struct CGImage { } *)newCGImageFromPlanar8VImageBuffer:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 error:(id *)a1;
+ (struct CGImage { } *)newCGImageFromRGBA8VImageBuffer:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 error:(id *)a1;
+ (id)numberOfChannelsInImageData:(id)a0 error:(id *)a1;
+ (struct CGImage { } *)rotateImage:(struct CGImage { } *)a0 accordingToEXIFOrientation:(int)a1;
+ (struct CGImage { } *)rotateImage:(struct CGImage { } *)a0 withAngle:(float)a1 andXFlip:(BOOL)a2 andYFlip:(BOOL)a3;
+ (id)saveCGImage:(const struct CGImage { } *)a0 withName:(id)a1 inFolder:(id)a2 error:(id *)a3;
+ (id)saveCVPixelBuffer420YpCbCr8:(struct __CVBuffer { } *)a0 withName:(id)a1 inFolder:(id)a2 error:(id *)a3;
+ (id)saveCVPixelBufferPlane8:(int)a0 from:(struct __CVBuffer { } *)a1 withName:(id)a2 inFolder:(id)a3 error:(id *)a4;
+ (id)saveCVPixelBufferRGBA8:(struct __CVBuffer { } *)a0 withName:(id)a1 inFolder:(id)a2 error:(id *)a3;
+ (id)saveRawBuffer:(void *)a0 withWidth:(unsigned int)a1 andHeight:(unsigned int)a2 andRowBytes:(unsigned int)a3 withName:(id)a4 inFolder:(id)a5 error:(id *)a6;
+ (id)saveVImageBufferPlanar8:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 withName:(id)a1 inFolder:(id)a2 error:(id *)a3;
+ (id)saveVImageBufferPlanar8ToData:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 deriveTypeFromFileName:(id)a1 error:(id *)a2;
+ (id)saveVImageBufferRGBA8:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 withName:(id)a1 inFolder:(id)a2 error:(id *)a3;
+ (id)saveVImageBufferRGBA8ToData:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 deriveTypeFromFileName:(id)a1 error:(id *)a2;
+ (id)saveVImageBufferRGBA8ToJPEGData:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 withCompressionQuality:(float)a1 error:(id *)a2;
+ (BOOL)writeImage:(struct CGImage { } *)a0 toFile:(id)a1 error:(id *)a2;
+ (id)writeImageToData:(struct CGImage { } *)a0 type:(struct __CFString { } *)a1 error:(id *)a2;

@end
