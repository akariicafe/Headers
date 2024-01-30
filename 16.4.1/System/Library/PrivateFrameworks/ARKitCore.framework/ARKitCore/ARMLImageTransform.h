@class NSArray, ARImageScalingTechnique;

@interface ARMLImageTransform : NSObject {
    struct CGSize { double width; double height; } _scaledSize;
    ARImageScalingTechnique *_imageScalingTechnique;
    NSArray *_imageScalePassDescriptions;
    struct OpaqueVTPixelTransferSession { } *_conversionSession;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    struct OpaqueVTPixelRotationSession { } *_rotationSession;
    struct __CVPixelBufferPool { } *_conversionBufferPool;
    struct __CVPixelBufferPool { } *_scaledBufferPool;
    struct __CVPixelBufferPool { } *_resultBufferPool;
    long long _rotationAngle;
    struct CGSize { double width; double height; } _inputSize;
    BOOL _useOptimalMSRCoefficients;
    BOOL _useExplicitBGRAConversion;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_applyFinalTransformToScaledImage:(id)a0 rotation:(long long)a1 finalResultSize:(struct CGSize { double x0; double x1; })a2 originalImageData:(id)a3;
- (void)_calculatePreScalingPassesForInputResolution:(struct CGSize { double x0; double x1; })a0;
- (id)_preScaleImageData:(id)a0;
- (void)_prepareSessionAndPoolForRotation:(long long)a0;
- (id)fastPassDownscaledResultDataFromImageData:(id)a0 croppedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 rotation:(long long)a2 rotationOfResultTensor:(long long)a3;
- (id)initWithScaledSize:(struct CGSize { double x0; double x1; })a0 useOptimalMSRCoefficients:(BOOL)a1 useExplicitBGRAConversion:(BOOL)a2;

@end
