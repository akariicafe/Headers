@class CIImage, CIVector, NSNumber;

@interface RAWDemosaicFilter : RAWFilter {
    CIImage *inputImage;
    CIVector *inputBlacks;
    NSNumber *inputRange;
    CIVector *inputFactors;
    NSNumber *inputPattern;
    NSNumber *inputDespeckle;
    CIVector *inputCropRect;
    NSNumber *inputRepresentativeNoise;
    NSNumber *inputDraftMode;
    NSNumber *inputScaleFactor;
    CIVector *inputNoiseModel;
    NSNumber *inputBaselineExposure;
    NSNumber *inputVersion;
}

- (id)range;
- (id)crop;
- (void).cxx_destruct;
- (int)sensorType;
- (id)blacks;
- (id)outputImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)phaseForBayer;
- (id)phaseForXtrans;
- (int)versionfor:(int)a0;
- (id)phaseFor:(int)a0;
- (int)forceVersion;
- (id)exposureFactor;
- (id)noiseModel;

@end
