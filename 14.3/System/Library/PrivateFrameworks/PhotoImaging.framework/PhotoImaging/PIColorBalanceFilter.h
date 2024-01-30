@class CIImage, NSNumber;

@interface PIColorBalanceFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWarmTemp;
@property (retain, nonatomic) NSNumber *inputWarmTint;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputHasFace;
@property (retain, nonatomic) NSNumber *inputIsRaw;

+ (id)customAttributes;
+ (struct CGColorSpace { } *)linearWideGamutColorSpace;
+ (id)colorBalanceKernels;
+ (id)gHDRtoPPKernel;
+ (id)PPtogHDRKernel;
+ (id)colorBalanceKernel;

- (void).cxx_destruct;
- (id)outputImage;
- (id)applyInputConversion:(id)a0;
- (id)applyOutputConversion:(id)a0;

@end
