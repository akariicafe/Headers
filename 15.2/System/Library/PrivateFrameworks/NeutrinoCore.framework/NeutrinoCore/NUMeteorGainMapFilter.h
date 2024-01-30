@class CIImage;

@interface NUMeteorGainMapFilter : CIFilter

@property (retain) CIImage *inputImage;

+ (id)gainMapKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
