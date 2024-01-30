@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIOuterGlowOrShadowFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRange;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputSpread;
@property (retain, nonatomic) CIColor *inputColor;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
