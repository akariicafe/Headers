@class CIImage, NSNumber;

@interface PINeutralGrayWhiteBalanceFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *strength;
@property (retain, nonatomic) NSNumber *warmth;
@property (retain, nonatomic) NSNumber *y;
@property (retain, nonatomic) NSNumber *i;
@property (retain, nonatomic) NSNumber *q;

+ (id)customAttributes;
+ (id)colorBalanceKernels;
+ (id)gHDRtoPPKernel;
+ (id)PPtogHDRKernel;
+ (id)RGBToYIQKernel;
+ (id)YIQToRGBKernel;
+ (id)whiteBalanceKernel;

- (void).cxx_destruct;
- (id)outputImage;
- (id)applyInputConversion:(id)a0;
- (id)applyOutputConversion:(id)a0;
- (BOOL)isDefaultWarmth:(double)a0;

@end
