@class CIImage;

@interface CIMaximumComponent : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
