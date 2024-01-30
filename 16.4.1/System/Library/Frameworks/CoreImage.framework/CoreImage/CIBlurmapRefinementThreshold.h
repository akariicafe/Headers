@class CIImage, NSNumber;

@interface CIBlurmapRefinementThreshold : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputThreshold;

- (id)outputImage;
- (id)kernel;

@end
