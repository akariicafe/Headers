@class CIImage;

@interface CRImage : NSObject

@property (retain, nonatomic) CIImage *ciImage;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) struct CGImage { } *cgImage;
@property (nonatomic) BOOL vImageDataIsCopy;
@property (readonly) struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } vImage;
@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) int colorSpace;
@property (readonly) BOOL isFullRange;

+ (unsigned long long)bytesPerPixelForColorSpace:(int)a0;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })allocateVImageBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 bytesPerPixel:(int)a2;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })allocateVImageBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 colorSpace:(int)a2;
+ (BOOL)convertVImage:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 inColorSpace:(int)a1 toVImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 toColorSpace:(int)a3;
+ (id)nameForColorSpace:(int)a0;
+ (void)cgOrientation:(unsigned int)a0 toVImageRotationMode:(char *)a1 andReflection:(int *)a2;
+ (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })applyEXIFTransformsOnImage:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 inColorSpace:(int)a1 properties:(id)a2;
+ (unsigned long long)channelsForColorSpace:(int)a0;
+ (void)drawVerticalLineAtXOffset:(double)a0 image:(id)a1;

- (id)initWithContentsOfURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (unsigned long long)bytesPerPixel;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)writeToFile:(id)a0;
- (id)initWithCIImage:(id)a0;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (unsigned long long)numChannels;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1 adjustedToSize:(struct CGSize { double x0; double x1; } *)a2 mask:(struct CGImage { } *)a3;
- (id)imageByConvertingToColorSpace:(int)a0;
- (id)initWithContentsOfURL:(id)a0 toColorSpace:(int)a1;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageByRotating90CW;
- (id)imageByCorrectingFromOrientation:(unsigned int)a0;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textFeaturePoints:(id)a1 radians:(float)a2 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1 alignCenter:(BOOL)a2;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })createFloatBuffer;
- (id)initY8WithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initARGB8888WithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initAYUV8888WithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initYUV888WithCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)runBlockWithARGB8888Image:(id /* block */)a0 blockOwnsMemory:(BOOL)a1;
- (id)initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 colorSpace:(int)a2;
- (id)initWithVImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inColorSpace:(int)a1;
- (id)initWithVImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 inColorSpace:(int)a1 toColorSpace:(int)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 properties:(id)a1 toColorSpace:(int)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 toColorSpace:(int)a1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 toColorSpace:(int)a1;
- (id)initWithCIImage:(id)a0 toColorSpace:(int)a1;
- (struct __CVBuffer { } *)pixelBufferWithScale:(double)a0 paddedToSize:(struct CGSize { double x0; double x1; })a1;
- (id)imageByApplyingHistogramCorrection;
- (id)imageByAdjustingBrightnessAlpha:(double)a0 beta:(double)a1;
- (id)imageByCroppingTextFeature:(id)a0 correctedBoundingBox:(id)a1 padding:(struct CGPoint { double x0; double x1; })a2 networkInputSize:(struct CGSize { double x0; double x1; })a3;
- (id)imageByRotating180;
- (id)imageByScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)imageByPaddingX:(unsigned long long)a0 paddingY:(unsigned long long)a1;
- (id)imageByDilating;
- (id)imageByApplyingBinaryMask:(id)a0;
- (id)initWithMat:(const struct Mat { void /* function */ **x0; char *x1; int x2; int x3; int x4; int x5[32]; int x6[32]; struct SmartPtr { void /* function */ **x0; void *x1; int *x2; } x7; int x8; int x9; int x10[32]; int x11[32]; unsigned long long x12; } *)a0;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toHeight:(unsigned long long)a1 andWidth:(unsigned long long)a2 withRotationAngle:(float)a3;
- (id)imageByInvertingIntensity;
- (id)imageByOverlayingImage:(id)a0 opacity:(float)a1;
- (id)imageByOverlayingRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 count:(long long)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 properties:(id)a1;
- (id)initWithVImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;

@end
