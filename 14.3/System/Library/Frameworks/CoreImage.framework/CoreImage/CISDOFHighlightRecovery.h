@class CIImage, NSNumber, CIVector;

@interface CISDOFHighlightRecovery : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSNumber *inputApertureScaling;
@property (retain) NSNumber *inputIterations;
@property (retain) NSNumber *inputMaxBlur;
@property (retain) CIVector *inputBlurRadius;
@property (retain) CIVector *inputMaxIntensity;
@property (retain) CIVector *inputMinIntensity;

+ (id)customAttributes;

- (id)outputImage;

@end
