@interface PAEEarthquake : PAEFilterDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (void)getEdgeMode:(unsigned int *)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1;
- (id)initWithAPIManager:(id)a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })quakeHeliumNodeWithInputImage:(struct HGRef<HGNode> { struct HGNode *x0; })a0 inputImage:(id)a1 outputImage:(id)a2 renderInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3 twist:(float)a4 horizontalShake:(float)a5 verticalShake:(float)a6 layers:(float)a7 centerX:(float)a8 centerY:(float)a9 randomSeed:(int)a10;
- (BOOL)variesOverTime;

@end
