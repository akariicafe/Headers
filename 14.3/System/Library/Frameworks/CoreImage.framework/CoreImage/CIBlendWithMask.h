@class CIImage;

@interface CIBlendWithMask : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIImage *inputBackgroundImage;
@property (retain, nonatomic) CIImage *inputMaskImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)outputImage;
- (id)_kernelB0;
- (float)_maskFillColorValue;

@end
