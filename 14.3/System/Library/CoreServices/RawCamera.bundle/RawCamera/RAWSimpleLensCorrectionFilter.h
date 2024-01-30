@class CIImage, NSNumber;

@interface RAWSimpleLensCorrectionFilter : CIFilter {
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

- (id)customAttributes;
- (void).cxx_destruct;
- (id)outputImage;
- (struct CGPoint { double x0; double x1; })mapPoint:(struct CGPoint { double x0; double x1; })a0 info:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })distortionRegionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;

@end
