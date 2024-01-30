@class CIImage, NSNumber;

@interface CIDisparitySmoothing : CIFilter

@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputNumIterations;

+ (id)customAttributes;

- (id)outputImageMetal;
- (id)_customBoxBlur5Kernel;
- (id)outputImage;

@end
