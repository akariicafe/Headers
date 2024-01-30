@class VNImageSourceManager, NSDictionary, CIImage, CIContext;

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting> {
    struct __CVBuffer { } *_origPixelBuffer;
    struct CGImage { } *_origCGImage;
    struct __CFDictionary { } *_pixelBufferReps;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pixelBufferRepsLock;
    CIImage *_origCIImage;
    CIContext *_passedInCIContext;
    struct opaqueCMSampleBuffer { } *_origSampleBuffer;
    VNImageSourceManager *_imageSourceManager;
    int _orientation;
    unsigned long long _origImageWidth;
    unsigned long long _origImageHeight;
    NSDictionary *_options;
}

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long height;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } timingInfo;

+ (const struct __CFDictionary { } *)ioSurfaceBackedPixelBufferAttributes;
+ (int)_helpReadOrientationFromOptionsDictionary:(id)a0;
+ (struct CGColorSpace { } *)copyColorspaceForFormat:(unsigned int)a0 bitmapInfo:(unsigned int *)a1;
+ (id)createPixelBufferRepsCacheKeyForCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 format:(unsigned int)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCenterCropRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageSize:(struct CGSize { double x0; double x1; })a1 calculatedScaleX:(double *)a2 calculatedScaleY:(double *)a3;

- (id)initWithCIImage:(id)a0 options:(id)a1;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 augmentationOptions:(id)a5 error:(id *)a6;
- (id)sequencedRequestPreviousObservationsKey;
- (id)fileURL;
- (struct __CVBuffer { } *)createBufferWithMaxSideLengthOf:(unsigned long long)a0 andPixelFormat:(unsigned int)a1 andOptions:(id)a2 error:(id *)a3;
- (struct __CVBuffer { } *)cachedPixelBufferRepresentationForKey:(id)a0;
- (struct __CVBuffer { } *)originalPixelBuffer;
- (void)purgeCachedRepresentations;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4 pixelBufferRepsCacheKey:(id *)a5;
- (BOOL)getPixelFocalLengthIfAvailable:(float *)a0;
- (struct CGImage { } *)originalCGImage;
- (id)imageProperties;
- (BOOL)getCameraOpticalCenterIfAvailable:(struct CGPoint { double x0; double x1; } *)a0;
- (id)augmentedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 augmentationOptions:(id)a4 error:(id *)a5;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (int)orientation;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5;
- (BOOL)processInChunksOfSize:(unsigned long long)a0 overlapFraction:(float)a1 options:(id)a2 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 handler:(id /* block */)a4 error:(id *)a5;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5 pixelBufferRepsCacheKey:(id *)a6;
- (void).cxx_destruct;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)getCameraIntrinsicsAvailable:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9 pixelBufferRepsCacheKey:(id *)a10;
- (struct __CVBuffer { } *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)a0 andCropBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andPixelFormat:(unsigned int)a2 andOptions:(id)a3 error:(id *)a4;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9;
- (void)dealloc;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2;

@end
