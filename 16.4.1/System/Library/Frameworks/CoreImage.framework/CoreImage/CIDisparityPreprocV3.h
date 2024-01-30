@class CIImage;

@interface CIDisparityPreprocV3 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputAlphaImage;

- (id)outputImage;
- (id)preprocKernel;
- (id)preprocKernelNoAlpha;

@end
