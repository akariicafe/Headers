@class CIImage, NSNumber;

@interface CIPortraitBlurPreProcess : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurmapImage;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)_kernelMetal;
- (id)_kernel;
- (id)outputImage;

@end
