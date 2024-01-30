@class CIVector, NSNumber, CIColor;

@interface CIRadialGradient : CIFilter

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius0;
@property (retain, nonatomic) NSNumber *inputRadius1;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
