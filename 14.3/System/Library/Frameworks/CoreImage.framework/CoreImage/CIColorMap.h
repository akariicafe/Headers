@class CIImage;

@interface CIColorMap : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputGradientImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;

@end
