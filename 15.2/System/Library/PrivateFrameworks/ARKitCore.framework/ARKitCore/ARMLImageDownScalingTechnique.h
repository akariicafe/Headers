@class ARImageCroppingTechnique, ARMLImageDownScalingResultData, NSObject, ARImageRotationTechnique, ARMLImageTransform, ARImageScalingTechnique, ARMLIntermediateDownScalingResultData;
@protocol OS_dispatch_queue;

@interface ARMLImageDownScalingTechnique : ARImageBasedTechnique {
    ARImageScalingTechnique *_imageScalingTechnique;
    ARImageRotationTechnique *_imageRotationTechnique;
    ARImageCroppingTechnique *_imageCroppingTechnique;
    ARMLImageTransform *_fastPassImageScaler;
    ARMLImageTransform *_fastPassUltraWideImageScaler;
    struct vImageCVImageFormat { } *_cvImageFormatRef;
    struct __CVPixelBufferPool { } *_bgraPixelBufferPool;
    int _lockedOrientation;
    ARMLIntermediateDownScalingResultData *_intermediateDownSamplingResultData;
    ARMLImageDownScalingResultData *_downSamplingResultData;
    BOOL _enableDoubleMLResolutionForIPad;
    NSObject<OS_dispatch_queue> *_processingQueue;
    double _resultLatency;
    BOOL _deterministic;
}

@property (nonatomic) BOOL centerCropImage;
@property (readonly, nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL resizeUltraWideImage;
@property (nonatomic) BOOL saveIntermediateScaleResultData;
@property (copy, nonatomic) id /* block */ wideRotationStrategy;
@property (copy, nonatomic) id /* block */ ultrawideRotationStrategy;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)prepare:(BOOL)a0;
- (id)_fullDescription;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (long long)getDeviceOrientationFromImageData:(id)a0;
- (id)_twoPassDownscaledResultDataFromImageData:(id)a0 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_fastPassDownscaledResultDataFromImageData:(id)a0 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fastPassScaler:(id)a2;
- (id)_scaleImageDataForNeuralNetwork:(id)a0 scaledSize:(struct CGSize { double x0; double x1; })a1;
- (id)_rotateImageDataForNeuralNetwork:(id)a0 deviceOrientation:(long long)a1 pRegionOfInterest:(struct CGSize { double x0; double x1; } *)a2 pRotationOfResultTensor:(long long *)a3;
- (id /* block */)defaultRotationStrategy;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 requiredTimeInterval:(double)a1;
- (void)lockOrientation:(long long)a0;

@end
