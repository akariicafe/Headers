@class CIImage;

@interface CIColorMap : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputGradientImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_kernel;

@end
