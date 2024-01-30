@class CIVector, CIColor;

@interface CISmoothLinearGradient : CIFilter

@property (retain, nonatomic) CIVector *inputPoint0;
@property (retain, nonatomic) CIVector *inputPoint1;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
