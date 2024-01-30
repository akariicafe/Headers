@class NSString;

@interface HMIVisionUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (struct __CVBuffer { } *)transferPixelBuffer:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned int)a1 options:(long long)a2 error:(id *)a3;
+ (struct __CVBuffer { } *)createPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1 useIOSurface:(BOOL)a2;
+ (struct __CVBuffer { } *)transferPixelBuffer:(struct __CVBuffer { } *)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 size:(struct CGSize { double x0; double x1; })a2 pixelFormat:(unsigned int)a3 options:(long long)a4 error:(id *)a5;
+ (struct __CVBuffer { } *)createPixelBufferFromJPEGDataProvider:(struct CGDataProvider { } *)a0 error:(id *)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applyPadding:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 padding:(struct CGSize { double x0; double x1; })a2;
+ (struct __CVBuffer { } *)cropPixelBuffer:(struct __CVBuffer { } *)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
+ (struct __CVBuffer { } *)resizePixelBuffer:(struct __CVBuffer { } *)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
+ (struct __CVBuffer { } *)resizePixelBuffer:(struct __CVBuffer { } *)a0 size:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned int)a2 options:(long long)a3 error:(id *)a4;
+ (id)createJPEGDataFromPixelBuffer:(struct __CVBuffer { } *)a0 scale:(float)a1 encodeQuality:(float)a2 error:(id *)a3;
+ (struct __CVBuffer { } *)createPixelBufferFromJPEGPath:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)createPixelBufferFromJPEGData:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)createPixelBufferFromImageData:(id)a0 error:(id *)a1;
+ (struct __CVBuffer { } *)dewarpPixelBuffer:(struct __CVBuffer { } *)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 size:(struct CGSize { double x0; double x1; })a2 pixelFormat:(unsigned int)a3 options:(long long)a4 cameraModel:(id)a5 error:(id *)a6;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imposeMinSizeFor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOriginalSize:(struct CGSize { double x0; double x1; })a1 minCrop:(int)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maintainAspectRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalSize:(struct CGSize { double x0; double x1; })a1 ratioThreshold:(float)a2;
+ (BOOL)saveVideoFrame:(id)a0 videoId:(id)a1 baseURL:(id)a2 error:(id *)a3;
+ (struct __CVBuffer { } *)transferPixelBuffer:(struct __CVBuffer { } *)a0 rotationAngle:(float)a1 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 size:(struct CGSize { double x0; double x1; })a3 precision:(unsigned long long)a4 error:(id *)a5;
+ (void)releaseCachedVisionResources;


@end
