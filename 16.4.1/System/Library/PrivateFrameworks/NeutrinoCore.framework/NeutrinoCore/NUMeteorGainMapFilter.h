@class CIImage, NSNumber;

@interface NUMeteorGainMapFilter : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputGain;

+ (id)gainMapKernel;

- (id)outputImage;
- (void).cxx_destruct;

@end
