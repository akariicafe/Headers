@class CIImage, NSDictionary, NSNumber;

@interface CIDisparityWeightsV3 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain) NSNumber *inputScale;

- (id)outputImage;
- (id)weightsXKernel;
- (id)weightsYKernel;

@end
