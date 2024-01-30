@class CIVector, CIColor, NSNumber;

@interface CIStripesGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputCenter;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;
@property (retain, nonatomic) NSNumber *inputWidth;
@property (retain, nonatomic) NSNumber *inputSharpness;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
