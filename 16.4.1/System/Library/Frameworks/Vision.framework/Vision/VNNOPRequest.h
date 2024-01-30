@class VNSupportedImageSize;

@interface VNNOPRequest : VNImageBasedRequest

@property (copy, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) BOOL detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;

+ (Class)configurationClass;

- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)a0;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (struct CGSize { double x0; double x1; })_actualSizeForDesiredSize:(id)a0 ofSourceImageWidth:(unsigned long long)a1 height:(unsigned long long)a2;
- (struct __CVBuffer { } *)_createScaledImagePixelBufferFromCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofImageBuffer:(id)a1 inPixelFormat:(unsigned int)a2 forDetectorInputImageSize:(struct CGSize { double x0; double x1; })a3 usingAnisotropicScaling:(BOOL)a4 error:(id *)a5;
- (struct __CVBuffer { } *)_createScaledImagePixelBufferFromImageBuffer:(id)a0 inPixelFormat:(unsigned int)a1 forDetectorInputImageSize:(struct CGSize { double x0; double x1; })a2 usingAnisotropicScaling:(BOOL)a3 error:(id *)a4;
- (BOOL)_performNOPForRevision:(unsigned long long)a0 inContext:(id)a1 detectorCompletionSemaphore:(id)a2 error:(id *)a3;
- (BOOL)hasCancellationHook;
- (id)supportedImageSizeSet;

@end
