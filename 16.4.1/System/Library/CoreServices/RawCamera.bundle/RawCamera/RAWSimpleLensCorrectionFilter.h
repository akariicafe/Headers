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
- (id)customAttributes;
- (void).cxx_destruct;

@end
