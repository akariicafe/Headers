@class CIImage, CIColor, NSString;

@interface PIColorWashDuoFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputShadowColor;
@property (retain, nonatomic) CIColor *inputHighlightColor;
@property (retain, nonatomic) NSString *inputMode;

+ (id)customAttributes;
+ (id)colorWashKernels;
+ (id)hueChromaColorWashDuoFixedKernel;
+ (id)hueChromaColorWashDuoKernel;
+ (id)hueChromaColorWashDuoVariableKernel;
+ (id)iptColorWashDuoFixedKernel;
+ (id)iptColorWashDuoKernel;
+ (id)iptColorWashDuoVariableKernel;
+ (id)rgbColorWashDuoFixedKernel;
+ (id)rgbColorWashDuoKernel;
+ (id)rgbColorWashDuoVariableKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
