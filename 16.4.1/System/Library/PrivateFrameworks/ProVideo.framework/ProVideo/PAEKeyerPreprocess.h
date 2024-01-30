@class PAEKeyer;

@interface PAEKeyerPreprocess : NSObject {
    PAEKeyer *_keyer;
    id _apiManager;
}

- (void)dealloc;
- (BOOL)addAdvancedParametersWithParamAPI:(id)a0 paramFlags:(unsigned int)a1;
- (BOOL)doDegrainWithDegrainAmount:(double)a0 degrainIntensity:(double)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2 outputNode:(void *)a3 pcaMatrix:(id)a4 width:(int)a5 height:(int)a6;
- (BOOL)doPreprocessKeyerFootageWithParamAPI:(id)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1 linearInput:(BOOL)a2 scaleX:(float)a3 scaleY:(float)a4 width:(float)a5 height:(float)a6 fixDVResult:(void *)a7 degrainResult:(void *)a8 outputNode:(void *)a9;
- (BOOL)findGrainRegionWithInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 coordX:(int *)a1 coordY:(int *)a2 width:(int)a3 height:(int)a4 minGreenHueAngle:(float)a5 maxGreenHueAngle:(float)a6 greenChroma:(float)a7 minBlueHueAngle:(float)a8 maxBlueHueAngle:(float)a9 blueChroma:(float)a10;
- (void)setKeyer:(id)a0;

@end
