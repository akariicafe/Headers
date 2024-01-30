@class CIImage, NSNumber, NSString;

@interface PICompositingFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) NSNumber *inputIntensity;
@property (retain, nonatomic) NSString *inputBlendMode;

+ (id)customAttributes;
+ (id)availableBlendModes;
+ (id)blendKernelForBlendMode:(id)a0;

- (id)outputImage;
- (void).cxx_destruct;

@end
