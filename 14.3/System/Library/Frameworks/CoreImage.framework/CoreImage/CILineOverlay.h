@class CIImage, NSNumber;

@interface CILineOverlay : CIFilter {
    CIImage *inputImage;
    NSNumber *inputNRNoiseLevel;
    NSNumber *inputNRSharpness;
    NSNumber *inputEdgeIntensity;
    NSNumber *inputThreshold;
    NSNumber *inputContrast;
}

+ (id)customAttributes;

- (id)outputImage;
- (id)_CIComicNoiseReduction;
- (id)_CISobelEdges;
- (id)_CIColorControls;

@end
