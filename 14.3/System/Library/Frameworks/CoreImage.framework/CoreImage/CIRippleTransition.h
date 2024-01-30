@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputShadingImage;
    CIVector *inputCenter;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputWidth;
    NSNumber *inputScale;
}

+ (id)customAttributes;

- (id)_CIRippleTransition;
- (id)outputImage;

@end
