@class CIImage, CIVector, NSNumber;

@interface CIPageCurlWithShadowTransition : CIFilter {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputShadowSize;
    NSNumber *inputShadowAmount;
    CIVector *inputShadowExtent;
}

+ (id)customAttributes;

- (id)_CIPageCurlWithShadowTransition;
- (id)_CIPageCurlNoShadowTransition;
- (id)outputImage;

@end
