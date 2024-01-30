@class CIVector, CIColor;

@interface CILinearGradient : CIFilter

@property (retain, nonatomic) CIVector *inputPoint0;
@property (retain, nonatomic) CIVector *inputPoint1;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
