@class CIImage, CIColor, NSString;

@interface PIColorWashFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIColor *inputColor;
@property (retain, nonatomic) NSString *inputMode;

+ (id)customAttributes;
+ (id)colorWashFixedKernel;
+ (id)colorWashFixedSmoothKernel;
+ (id)colorWashKernels;
+ (id)colorWashVariableKernel;
+ (id)colorWashVariableSmoothKernel;
+ (id)hueChromaColorWashKernel;
+ (id)hueChromaFixedColorWashKernel;
+ (id)hueChromaVariableColorWashKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
