@class CIImage, NSDictionary, NSNumber;

@interface CIDisparityRefinementSparseSamplerV3 : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputPreprocImage;
@property (retain) NSDictionary *inputTuningParameters;
@property (retain) NSNumber *inputScale;

- (id)sampleKernel;
- (id)outputImage;

@end
