@class CIImage, NSNumber;

@interface CIBlurmapRefinementThreshold : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputThreshold;

- (id)kernel;
- (id)outputImage;

@end
