@class CIImage, NSNumber, CIVector;

@interface CIPortraitAntialias : CIFilter

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputMaxBlurInPixels;
@property (copy, nonatomic) NSNumber *inputAntiAliasRadius;
@property (copy, nonatomic) NSNumber *inputLumaNoiseAmpl;
@property (copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff;
@property (copy, nonatomic) NSNumber *inputScale;
@property (copy, nonatomic) CIVector *inputRect;
@property (copy, nonatomic) CIVector *inputSensorSize;

- (id)outputImage;
- (id)_kernel:(BOOL)a0 withAddedNoise:(BOOL)a1;
- (id)_noiseGeneratorKernel;
- (id)noiseColorKernel;
- (id)outputImage:(id)a0 horizontal:(BOOL)a1;

@end
