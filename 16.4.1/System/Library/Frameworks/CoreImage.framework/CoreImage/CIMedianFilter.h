@class CIImage;

@interface CIMedianFilter : CIFilter

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel3x3;

@end
