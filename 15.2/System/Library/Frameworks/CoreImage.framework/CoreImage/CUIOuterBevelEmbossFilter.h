@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputSize;
@property (retain, nonatomic) NSNumber *inputSoften;
@property (retain, nonatomic) NSNumber *inputAngle;
@property (retain, nonatomic) CIColor *inputHighlightColor;
@property (retain, nonatomic) CIColor *inputShadowColor;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernelC;
- (id)_kernel;

@end
