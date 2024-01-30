@class CIImage, NSNumber;

@interface CIDisparitySmoothing : CIFilter

@property (retain) CIImage *inputImage;
@property (copy) NSNumber *inputNumIterations;

+ (id)customAttributes;

- (id)outputImage;
- (id)_customBoxBlur5Kernel;
- (id)outputImageMetal;

@end
