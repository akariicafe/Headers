@class CIImage;

@interface NUMeteorGainMapFilter : CIFilter

@property (retain) CIImage *inputImage;

+ (id)gainMapKernel;

- (void).cxx_destruct;
- (id)outputImage;

@end
