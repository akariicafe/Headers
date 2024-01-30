@interface PixelBufferUtility : NSObject

+ (struct __CVPixelBufferPool { } *)createPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 extendedPixelsPerRow:(unsigned long long)a3 minBufferCount:(unsigned long long)a4;
+ (struct __CVBuffer { } *)pixelBufferFromPool:(struct __CVPixelBufferPool { } *)a0;
+ (BOOL)copyPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 bytesPerPixel:(unsigned long long)a2;
+ (BOOL)isPixelBufferRawBayer:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelBufferCompandedRawBayer:(struct __CVBuffer { } *)a0;
+ (BOOL)isPixelFormatRawBayer:(unsigned int)a0;
+ (struct __CFDictionary { } *)createPixelBufferAttributesWithWidth:(unsigned int)a0 height:(unsigned int)a1 extendedPixelsPerRow:(unsigned int)a2 pixelFormat:(int)a3 bytesPerRowAlignment:(unsigned int)a4 planeAlignment:(unsigned int)a5;
+ (struct __CFDictionary { } *)createPixelBufferAttributesWithWidth:(unsigned int)a0 height:(unsigned int)a1 pixelFormat:(int)a2 bytesPerRow:(unsigned int)a3;
+ (BOOL)splitBayerBuffer:(struct __CVBuffer { } *)a0 intoWarholPixelBuffer:(struct __CVBuffer { } *)a1 shiftBitsLeftBy:(int)a2;
+ (BOOL)splitBayerBuffer:(struct __CVBuffer { } *)a0 intoYUVPixelBuffer:(struct __CVBuffer { } *)a1 shiftBitsLeftBy:(int)a2;
+ (BOOL)joinYUVBuffer:(struct __CVBuffer { } *)a0 intoRawBayerPixelBuffer:(struct __CVBuffer { } *)a1 shiftBitsLeftBy:(int)a2 msbReplication:(BOOL)a3;
+ (BOOL)splitCompandedBayerBuffer:(struct __CVBuffer { } *)a0 intoCompandedWarholPixelBuffer:(struct __CVBuffer { } *)a1;
+ (struct __CVBuffer { } *)createRawPixelBufferWithWidth:(unsigned int)a0 height:(unsigned int)a1 extendedRows:(unsigned int)a2 extendedPixelsPerRow:(unsigned int)a3 pixelFormat:(int)a4 bytesPerRowAlignment:(unsigned int)a5 planeAlignment:(unsigned int)a6 bufferCacheMode:(unsigned int)a7;
+ (BOOL)isPixelFormatCompandedRawBayer:(unsigned int)a0;
+ (BOOL)joinWarholBuffer:(struct __CVBuffer { } *)a0 intoBayerBuffer:(struct __CVBuffer { } *)a1 shiftBitsRightBy:(int)a2 msbReplication:(BOOL)a3;
+ (BOOL)joinCompandedWarholBuffer:(struct __CVBuffer { } *)a0 intoCompandedBayerBuffer:(struct __CVBuffer { } *)a1;
+ (BOOL)copyData:(id)a0 toPlanarPixelBuffer:(struct __CVBuffer { } *)a1 toPlane:(unsigned long long)a2;
+ (id)copyPixelBufferData:(struct __CVBuffer { } *)a0 ofPlane:(unsigned long long)a1;
+ (struct __CVBuffer { } *)createRawPixelBufferWithWidth:(unsigned int)a0 height:(unsigned int)a1 pixelFormat:(int)a2 bytesPerRow:(unsigned int)a3;
+ (struct __CVBuffer { } *)newPixelBufferRefCopy:(struct __CVBuffer { } *)a0;
+ (BOOL)copyFromPixelBuffer:(struct __CVBuffer { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 andShiftBits:(int)a2;
+ (struct __CVPixelBufferPool { } *)createNewL010PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { } *)a0 minimumBufferCount:(unsigned long long)a1;
+ (struct __CVPixelBufferPool { } *)createNewL008PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { } *)a0 minimumBufferCount:(unsigned long long)a1;
+ (struct __CVBuffer { } *)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer { } *)a0 withPixelBufferPool:(struct __CVPixelBufferPool { } *)a1;
+ (struct __CVBuffer { } *)newYUVBufferFromRawBayerPixelBuffer:(struct __CVBuffer { } *)a0 withPixelBufferPool:(struct __CVPixelBufferPool { } *)a1;
+ (struct __CVBuffer { } *)newRawBayerBufferFromYUVPixelBuffer:(struct __CVBuffer { } *)a0 withPixelBufferPool:(struct __CVPixelBufferPool { } *)a1 msbReplication:(BOOL)a2;
+ (struct __CVBuffer { } *)newWarholBufferFromCompandedRawBayerPixelBuffer:(struct __CVBuffer { } *)a0 withPixelBufferPool:(struct __CVPixelBufferPool { } *)a1;
+ (struct __CVBuffer { } *)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)fillPlaneOfPixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(int)a1 withValue:(unsigned short)a2;
+ (void)writeBuffer:(const char *)a0 ofSize:(unsigned long long)a1 toFile:(id)a2;
+ (BOOL)verticallySplitPixelBuffer:(struct __CVBuffer { } *)a0 intoTopPixelBuffer:(struct __CVBuffer { } *)a1 bottomPixelBuffer:(struct __CVBuffer { } *)a2;
+ (BOOL)concatPixelBuffer:(struct __CVBuffer { } *)a0 withPixelBuffer:(struct __CVBuffer { } *)a1 targetPixelBuffer:(struct __CVBuffer { } *)a2;
+ (unsigned long long)extendedPixelsPerRowOfPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct __CVPixelBufferPool { } *)createPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 bytesPerRow:(unsigned long long)a3 minBufferCount:(unsigned long long)a4;
+ (BOOL)copyData:(id)a0 toNonPlanarPixelBuffer:(struct __CVBuffer { } *)a1;
+ (id)copyNonPlanarPixelBufferData:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)readFrameFromFile:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 pixelFormat:(unsigned int)a3;
+ (BOOL)writeBuffer:(struct __CVBuffer { } *)a0 toFile:(id)a1;
+ (struct __CVBuffer { } *)create4444AYpCbCr16PixelBufferFillAlphaWithData:(struct __CFData { } *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
+ (BOOL)copyMonochromeBuffer:(struct __CVBuffer { } *)a0 toAlphaChannelOfBuffer:(struct __CVBuffer { } *)a1;
+ (BOOL)copyuint16Data:(unsigned short *)a0 toAlphaChannelOfBuffer:(struct __CVBuffer { } *)a1;
+ (BOOL)copyAlphaChannelOfBuffer:(struct __CVBuffer { } *)a0 touint16Data:(unsigned short *)a1;
+ (BOOL)copyAlphaChannelOfBuffer:(struct __CVBuffer { } *)a0 toMonochromeBuffer:(struct __CVBuffer { } *)a1;

@end
