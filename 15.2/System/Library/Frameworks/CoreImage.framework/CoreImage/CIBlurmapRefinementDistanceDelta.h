@class CIImage, NSNumber;

@interface CIBlurmapRefinementDistanceDelta : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputDistance;
@property (retain) NSNumber *inputThreshold;
@property (retain) NSNumber *inputScalingFactor;

- (id)outputImage;

@end
