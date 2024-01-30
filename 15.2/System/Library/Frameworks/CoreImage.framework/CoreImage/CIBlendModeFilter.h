@class CIImage;

@interface CIBlendModeFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
