@class CIVector, NSDictionary, CIImage, NSNumber;

@interface CILensModelCalculator : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMinMaxImage;
@property (copy, nonatomic) CIVector *inputOriginalSize;
@property (copy, nonatomic) CIVector *inputFocusRect;
@property (copy, nonatomic) NSNumber *inputSimulatedAperture;
@property (copy, nonatomic) NSNumber *inputIntrinsicMatrixFocalLength;
@property (retain, nonatomic) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)kernel;
- (id)outputImage;
- (id)cpuParams;
- (id)mtlKernel;

@end
