@class CIImage, NSNumber;

@interface CIFocalPlaneNative : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIImage *inputLensModelCalculatorImage;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}

+ (id)customAttributes;

- (id)_focalPlanePreProcessorKernelPow2;
- (id)_focalPlanePreProcessorKernel;
- (id)outputImage;

@end
