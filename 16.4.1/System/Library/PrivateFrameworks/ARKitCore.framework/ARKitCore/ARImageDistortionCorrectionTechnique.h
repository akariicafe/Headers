@class NSDictionary;

@interface ARImageDistortionCorrectionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_undistortedImageBufferPool;
    struct __CVPixelBufferPool { } *_rgbImagePool;
    struct __CVPixelBufferPool { } *_rgbUndistortedImagePool;
    NSDictionary *_undistortionMappingsForRotations;
}

@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)dealloc;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)buildUVMapFromHardcodedCalibrationParameters;
- (void)buildUVMapWithCameraCalibrationData:(id)a0;
- (void)buildUVMapWithDistortedPixelProviderBlock:(id /* block */)a0;
- (struct CGPoint { double x0; double x1; })lensDistortionPointForPoint:(struct CGPoint { double x0; double x1; })a0 lookupTable:(id)a1 distortionOpticalCenter:(struct CGPoint { double x0; double x1; })a2 imageSize:(struct CGSize { double x0; double x1; })a3;
- (void)undistortImage:(struct __CVBuffer { } *)a0 toTargetImage:(struct __CVBuffer { } *)a1 imageRotationAngle:(long long)a2;

@end
