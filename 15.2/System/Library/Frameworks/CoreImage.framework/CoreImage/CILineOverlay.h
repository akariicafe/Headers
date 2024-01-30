@class CIImage, NSNumber;

@interface CILineOverlay : CIFilter {
    NSNumber *inputNRNoiseLevel;
    NSNumber *inputNRSharpness;
    NSNumber *inputEdgeIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputContrast;
}

@property (retain, nonatomic) CIImage *inputImage;

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIComicNoiseReduction;
- (id)_CISobelEdges;
- (id)_CIColorControls;

@end
