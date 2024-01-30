@class CIImage, CIColor;

@interface CIFalseColor : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor0;
@property (retain, nonatomic) CIColor *inputColor1;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
