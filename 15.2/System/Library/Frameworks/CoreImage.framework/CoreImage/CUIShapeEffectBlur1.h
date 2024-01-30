@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIShapeEffectBlur1 : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputFill;
@property (retain, nonatomic) CIVector *inputOffset;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputGlowColorInner;
@property (retain, nonatomic) CIColor *inputGlowColorOuter;
@property (retain, nonatomic) CIColor *inputShadowColorInner;
@property (retain, nonatomic) CIColor *inputShadowColorOuter;
@property (retain, nonatomic) NSNumber *inputShadowBlurInner;
@property (retain, nonatomic) NSNumber *inputShadowBlurOuter;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
