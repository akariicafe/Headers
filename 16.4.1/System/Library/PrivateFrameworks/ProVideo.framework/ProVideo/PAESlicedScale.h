@interface PAESlicedScale : PAEFilterDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (void)additionalObjectDownScale:(void *)a0 objectScale:(struct PCVector2<double> { double x0; double x1; })a1 innerScale:(struct PCVector2<double> { double x0; double x1; })a2 xLeft:(double)a3 xRight:(double)a4 yTop:(double)a5 yBottom:(double)a6;
- (void)calculateBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 fromOrigin:(struct PCVector2<double> { double x0; double x1; })a1 mode:(int)a2 inputSize:(struct PCVector2<double> { double x0; double x1; })a3 ignoreOffsets:(BOOL)a4 xLeft:(double)a5 xRight:(double)a6 yBottom:(double)a7 yTop:(double)a8 objectScale:(struct PCVector2<double> { double x0; double x1; })a9 offset:(struct PCVector2<double> { double x0; double x1; })a10;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (BOOL)getOutputBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 withInputBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withInputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withRenderInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3;
- (id)initWithAPIManager:(id)a0;
- (void)innerScaleFromObjectScale:(struct PCVector2<double> { double x0; double x1; })a0 innerScale:(void *)a1 xLeft:(double)a2 xRight:(double)a3 yTop:(double)a4 yBottom:(double)a5 inputSize:(struct PCVector2<double> { double x0; double x1; })a6 newObjectSize:(void *)a7 mode:(int)a8;
- (void)wholeTileExpandLeftScale:(double *)a0 expandRightScale:(double *)a1 expandBottomScale:(double *)a2 expandTopScale:(double *)a3 objectScale:(void *)a4 xLeft:(double)a5 xRight:(double)a6 yBottom:(double)a7 yTop:(double)a8;

@end
