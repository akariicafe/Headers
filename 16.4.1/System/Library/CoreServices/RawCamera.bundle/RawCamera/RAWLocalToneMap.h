@class CIImage, NSNumber;

@interface RAWLocalToneMap : RAWFilter {
    CIImage *inputImage;
    NSNumber *inputShadowAmount;
    NSNumber *inputHighlightAmount;
    NSNumber *inputShadowCutoff;
    NSNumber *inputHighlightCutoff;
    NSNumber *inputAmount;
    NSNumber *inputBlurRadius;
    id inputColorSpace;
    CIImage *tcImage;
}

+ (id)customAttributes;

- (id)outputImage;
- (void).cxx_destruct;
- (BOOL)makeToneCurveImage;

@end
