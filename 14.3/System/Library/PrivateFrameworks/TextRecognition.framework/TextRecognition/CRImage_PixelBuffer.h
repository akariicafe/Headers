@interface CRImage_PixelBuffer : CRImage

+ (void)drawVerticalLineAtXOffset:(double)a0 image:(id)a1;
+ (struct __CVBuffer { } *)_convertPixelBuffer:(struct __CVBuffer { } *)a0 toFormat:(unsigned int)a1;

- (struct CGImage { } *)cgImage;
- (unsigned long long)width;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dealloc;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })vImage;
- (unsigned long long)height;
- (void)writeToFile:(id)a0;
- (struct __CVBuffer { } *)pixelBuffer;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2 mask:(struct CGImage { } *)a3;
- (id)imageByConvertingToColorSpace:(int)a0;
- (id)initWithContentsOfURL:(id)a0 toColorSpace:(int)a1;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageByRotating90CW;
- (id)imageByCorrectingFromOrientation:(unsigned int)a0;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1 alignCenter:(BOOL)a2;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })createFloatBuffer;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageByRotating180;
- (id)imageByScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)imageByPaddingX:(unsigned long long)a0 paddingY:(unsigned long long)a1;
- (id)imageByDilating;
- (id)imageByApplyingBinaryMask:(id)a0;
- (id)imageByInvertingIntensity;
- (id)imageByOverlayingImage:(id)a0 opacity:(float)a1;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1;
- (struct __CVBuffer { } *)_pixelBufferFromUrl:(id)a0;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2 mask:(struct CGImage { } *)a3 format:(unsigned int)a4;

@end
