@class CIImage, NSNumber, CIVector;

@interface CIDisintegrateWithMaskTransition : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIImage *inputMaskImage;
@property (retain, nonatomic) NSNumber *inputTime;
@property (retain, nonatomic) NSNumber *inputShadowRadius;
@property (retain, nonatomic) NSNumber *inputShadowDensity;
@property (retain, nonatomic) CIVector *inputShadowOffset;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;
- (id)_kernelG;

@end
