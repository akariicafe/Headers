@class CIImage, CIVector, NSNumber;

@interface CIFocalPlanePreprocessorInternal : CIFilter {
    CIImage *inputImage;
    CIImage *inputMatteImage;
    CIVector *inputFocusRect;
    NSNumber *inputZeroShiftPercentile;
    NSNumber *inputAlphaThreshold;
    NSNumber *inputAmplitude;
    NSNumber *inputExponent;
    NSNumber *inputGamma;
    NSNumber *inputMinFactor;
    NSNumber *inputMaxFactor;
}

+ (id)customAttributes;

- (id)outputImage;

@end
