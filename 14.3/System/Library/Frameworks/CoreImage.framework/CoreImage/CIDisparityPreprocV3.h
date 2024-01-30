@class CIImage;

@interface CIDisparityPreprocV3 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputAlphaImage;

- (id)preprocKernel;
- (id)preprocKernelNoAlpha;
- (id)outputImage;

@end
