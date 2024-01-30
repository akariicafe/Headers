@class NSArray, ARImageScalingTechnique;

@interface ARMLImageTransform : NSObject {
    struct CGSize { double width; double height; } _scaledSize;
    ARImageScalingTechnique *_imageScalingTechnique;
    NSArray *_imageScalePassDescriptions;
    struct OpaqueVTImageRotationSession { } *_rotationSession;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    struct __CFBoolean { } *_rotationSessionSupportsScaling;
    struct __CVPixelBufferPool { } *_resultBufferPool;
    long long _rotationAngle;
    struct CGSize { double width; double height; } _inputSize;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScaledSize:(struct CGSize { double x0; double x1; })a0;
- (void)_calculatePreScalingPassesForInputResolution:(struct CGSize { double x0; double x1; })a0;
- (id)_preScaleImageData:(id)a0;
- (id)_applyFinalTransformToScaledImage:(id)a0 rotation:(long long)a1 finalResultSize:(struct CGSize { double x0; double x1; })a2 originalImageData:(id)a3;
- (void)_prepareSessionAndPoolForRotation:(long long)a0;
- (id)fastPassDownscaledResultDataFromImageData:(id)a0 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(long long)a2 rotationOfResultTensor:(long long)a3;

@end
