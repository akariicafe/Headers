@class CIImage;

@interface CIMinimumComponent : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
