@class CIImage, NSNumber;

@interface CIBlurmapRefinementLinearMapping : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputScalingFactor;

- (id)kernel;
- (id)outputImage;
- (id)kernelNoSecondaryImage;

@end
