@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {
    CIVector *inputCenter;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputWidth;
    NSNumber *inputScale;
}

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputTargetImage;
@property (retain, nonatomic) CIImage *inputShadingImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIRippleTransition;

@end
