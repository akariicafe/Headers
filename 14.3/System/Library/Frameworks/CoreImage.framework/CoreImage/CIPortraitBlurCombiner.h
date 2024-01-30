@class CIImage, NSDictionary;

@interface CIPortraitBlurCombiner : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurImage;
@property (retain) CIImage *inputMatteImage;
@property (retain) NSDictionary *inputTuningParameters;

- (id)_ourBlendKernelMetal;
- (id)nonMetalKernel;
- (id)nonMetalKernelYCC;
- (id)_blendKernel:(BOOL)a0;
- (id)outputImage;

@end
