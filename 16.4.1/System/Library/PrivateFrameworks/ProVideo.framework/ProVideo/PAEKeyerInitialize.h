@class PAEKeyer;

@interface PAEKeyerInitialize : NSObject {
    PAEKeyer *_keyer;
    id _apiManager;
}

+ (void)setInitialSamples:(void *)a0 autokeySetupUtil:(id)a1 sampleBoxHalfDim:(float)a2;

- (void)dealloc;
- (BOOL)calculateInitialMatteWithInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 omSamples:(void *)a1 colorPrimaries:(int)a2 screenColor:(int *)a3 minGreenHueAngle:(float)a4 maxGreenHueAngle:(float)a5 greenChroma:(float)a6 minBlueHueAngle:(float)a7 maxBlueHueAngle:(float)a8 blueChroma:(float)a9 histoPercentageIncluded:(float)a10 use32x32x32:(BOOL)a11 simpleKey:(BOOL)a12;
- (void)calculateInitialSamples:(void *)a0 percentageOfBaseColorIncluded:(float)a1 use32x32x32:(BOOL)a2 autokeySetupUtil:(id)a3 samples:(void *)a4;
- (BOOL)findSampleRectsWithInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 screenColor:(int *)a1 colorPrimaries:(int)a2 width:(int)a3 height:(int)a4 minGreenHueAngle:(float)a5 maxGreenHueAngle:(float)a6 greenChroma:(float)a7 minBlueHueAngle:(float)a8 maxBlueHueAngle:(float)a9 blueChroma:(float)a10 histoPercentageIncluded:(float)a11 omSamples:(void *)a12 viewingSetupMatte:(BOOL)a13 use32x32Histogram:(BOOL)a14 simpleKey:(BOOL)a15;
- (id)initWithAPIManager:(id)a0 keyer:(id)a1;

@end
