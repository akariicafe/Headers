@class CIImage, NSNumber;

@interface PIColorBalanceFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputWarmTemp;
@property (retain, nonatomic) NSNumber *inputWarmTint;
@property (retain, nonatomic) NSNumber *inputStrength;
@property (retain, nonatomic) NSNumber *inputHasFace;
@property (retain, nonatomic) NSNumber *inputIsRaw;

+ (id)customAttributes;
+ (id)PPtogHDRKernel;
+ (id)colorBalanceKernel;
+ (id)colorBalanceKernels;
+ (id)gHDRtoPPKernel;

- (id)outputImage;
- (void).cxx_destruct;
- (id)applyInputConversion:(id)a0;
- (id)applyOutputConversion:(id)a0;

@end
