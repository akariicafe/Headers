@class CIImage, NSNumber;

@interface RAWSimpleLensCorrectionFilter : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputDistortionScaleHalfMinorRadius;
    NSNumber *inputDistortionScaleMinorRadius;
    NSNumber *inputDistortionScaleMajorRadius;
    NSNumber *inputDistortionScaleMaxRadius;
    NSNumber *inputDraftMode;
    id inputColorSpace;
    NSNumber *inputFocalLength;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (id)customAttributes;

@end
