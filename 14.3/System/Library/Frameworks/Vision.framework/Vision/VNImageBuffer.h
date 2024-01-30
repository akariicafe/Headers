@class VNImageSourceManager, NSDictionary, CIImage, CIContext;

@interface VNImageBuffer : NSObject <VNSequencedRequestSupporting> {
    struct __CVBuffer { } *_origPixelBuffer;
    struct CGImage { } *_origCGImage;
    struct __CFArray { } *_pixelBufferReps;
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
+ (int)_VNVTPixelTransferSessionCreate:(struct OpaqueVTPixelTransferSession **)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeCenterCropRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inImageSize:(struct CGSize { double x0; double x1; })a1 calculatedScaleX:(double *)a2 calculatedScaleY:(double *)a3;
+ (int)_VNVTImageRotationSessionCreate:(struct OpaqueVTImageRotationSession **)a0 rotation:(unsigned int)a1;
+ (struct CGColorSpace { } *)copyColorspaceForFormat:(unsigned int)a0 bitmapInfo:(unsigned int *)a1;
+ (int)_helpReadOrientationFromOptionsDictionary:(id)a0;

- (struct __CVBuffer { } *)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)a0 andCropBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andPixelFormat:(unsigned int)a2 andOptions:(id)a3 error:(id *)a4;
- (struct __CVBuffer { } *)croppedBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 error:(id *)a5;
- (id)initWithData:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)_optionsWithOverridingOptions:(id)a0;
- (void)calculateOrientationCorrectedImageDimensions;
- (struct __CVBuffer { } *)createBufferWithMaxSideLengthOf:(unsigned long long)a0 andPixelFormat:(unsigned int)a1 andOptions:(id)a2 error:(id *)a3;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0 options:(id)a1;
- (struct __CVBuffer { } *)_retrieveBufferFromCacheIfFoundWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2;
- (BOOL)wantsSequencedRequestObservationsRecording;
- (id)initWithCIImage:(id)a0 options:(id)a1;
- (BOOL)_cropCVPixelBuffer:(struct __CVBuffer { } *)a0 outBuffer:(struct __CVBuffer **)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 format:(unsigned int)a4 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 performCrop:(BOOL)a6 options:(id)a7 error:(id *)a8;
- (id)initWithCIImage:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCGImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 options:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateTargetRectFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_cropCIImage:(id)a0 outBuffer:(struct __CVBuffer **)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 format:(unsigned int)a4 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 performCrop:(BOOL)a6 options:(id)a7 error:(id *)a8;
- (id)fileURL;
- (id)_baseCIImage;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 orientation:(unsigned int)a1 options:(id)a2;
- (id)initWithURL:(id)a0 orientation:(unsigned int)a1 options:(id)a2;
- (int)orientation;
- (struct __CVBuffer { } *)cropAndScaleBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(unsigned int)a3 imageCropAndScaleOption:(unsigned long long)a4 options:(id)a5 error:(id *)a6 calculatedNormalizedOriginOffset:(struct CGPoint { double x0; double x1; } *)a7 calculatedScaleX:(double *)a8 calculatedScaleY:(double *)a9;
- (void)_dumpIntermediateImage:(struct __CVBuffer { } *)a0 withOptions:(id)a1;
- (BOOL)_useCoreImageForFormat:(unsigned int)a0;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)augmentedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 augmentationOptions:(id)a4 error:(id *)a5;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 options:(id)a1;
- (void)purgeCachedRepresentations;
- (struct __CVBuffer { } *)originalPixelBuffer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct __CVBuffer { } *)_baseCVPixelBuffer;
- (id)initWithOptions:(id)a0 orientation:(unsigned int)a1;
- (BOOL)_cropImageSourceManager:(id)a0 outBuffer:(struct __CVBuffer **)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 format:(unsigned int)a4 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 performCrop:(BOOL)a6 options:(id)a7 error:(id *)a8;
- (BOOL)getCameraIntrinsicsAvailable:(struct { void /* unknown type, empty encoding */ x0[3]; } *)a0;
- (struct CGImage { } *)originalCGImage;
- (id)imageProperties;
- (BOOL)processInChunksOfSize:(unsigned long long)a0 overlapFraction:(float)a1 options:(id)a2 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 handler:(id /* block */)a4 error:(id *)a5;
- (BOOL)getCameraOpticalCenterIfAvailable:(struct CGPoint { double x0; double x1; } *)a0;
- (id)sequencedRequestPreviousObservationsKey;
- (BOOL)_isRectOutOfBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)getPixelFocalLengthIfAvailable:(float *)a0;
- (struct __CVBuffer { } *)bufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 options:(id)a3 error:(id *)a4;
- (id)initWithURL:(id)a0 options:(id)a1;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 format:(unsigned int)a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 options:(id)a4 augmentationOptions:(id)a5 error:(id *)a6;

@end
