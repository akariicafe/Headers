@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputBlurImage;
@property (retain) NSNumber *inputIntensity;

+ (id)definitionKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
