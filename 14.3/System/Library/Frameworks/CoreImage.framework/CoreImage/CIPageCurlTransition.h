@class CIImage, CIVector, NSNumber;

@interface CIPageCurlTransition : CIFilter {
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIImage *inputShadingImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
}

+ (id)customAttributes;

- (id)_CIPageCurlTransNoEmap;
- (id)_CIPageCurlTransition;
- (id)outputImage;

@end
