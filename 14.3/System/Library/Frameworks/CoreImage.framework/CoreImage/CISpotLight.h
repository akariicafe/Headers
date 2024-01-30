@class CIVector, CIColor, CIImage, NSNumber;

@interface CISpotLight : CIFilter {
    CIImage *inputImage;
    CIVector *inputLightPosition;
    CIVector *inputLightPointsAt;
    NSNumber *inputBrightness;
    NSNumber *inputConcentration;
    CIColor *inputColor;
}

+ (id)customAttributes;

- (id)_CISpotLight;
- (id)outputImage;

@end
