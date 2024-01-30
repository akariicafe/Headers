@class CIImage, NSNumber;

@interface CINoiseReduction : CIFilter {
    CIImage *inputImage;
    NSNumber *inputNoiseLevel;
    NSNumber *inputSharpness;
}

+ (id)customAttributes;

- (id)_CINoiseReduction;
- (id)outputImage;

@end
