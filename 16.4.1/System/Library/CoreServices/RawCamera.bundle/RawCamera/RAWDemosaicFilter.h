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
- (id)outputImage;
- (int)sensorType;
- (void).cxx_destruct;
- (id)crop;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionOf:(int)a0 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 userInfo:(id)a2;
- (id)blacks;
- (id)exposureFactor;
- (int)forceVersion;
- (id)noiseModel;
- (id)phaseFor:(int)a0;
- (id)phaseForBayer;
- (id)phaseForXtrans;
- (int)versionfor:(int)a0;

@end
