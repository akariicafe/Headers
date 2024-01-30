@class CIImage, CIColor, NSNumber;

@interface CIColorBalance : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputWarmth;
@property (retain, nonatomic) NSNumber *inputDamping;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
