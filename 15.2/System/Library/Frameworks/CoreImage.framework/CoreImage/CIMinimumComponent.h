@class CIImage;

@interface CIMinimumComponent : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
