@class CIImage, NSNumber;

@interface CIPortraitBlurPreProcess : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurmapImage;
@property (copy, nonatomic) NSNumber *inputUseMetal;

- (id)outputImage;
- (id)_kernel;
- (id)_kernelMetal;

@end
