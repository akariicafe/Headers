@class CIImage, NSNumber;

@interface CICheapBlur : CIFilter {
    CIImage *inputImage;
    NSNumber *inputPasses;
    NSNumber *inputSampling;
}

+ (id)customAttributes;

- (id)_CILerp;
- (id)outputImage;
- (id)_CICheapBlur;

@end
