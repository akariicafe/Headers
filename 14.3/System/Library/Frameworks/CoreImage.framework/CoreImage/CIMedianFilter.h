@class CIImage;

@interface CIMedianFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel3x3;
- (id)outputImage;

@end
