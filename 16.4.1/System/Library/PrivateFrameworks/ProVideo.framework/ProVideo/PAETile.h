@interface PAETile : PAEFilterDefaultBase

- (id)properties;
- (void)_compute_2x2_matrix:(float *)a0 withScale:(float)a1 angle:(float)a2 skew:(float)a3 stretch:(float)a4;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (void)getEdgeMode:(unsigned int *)a0 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a1;
- (id)initWithAPIManager:(id)a0;
- (void)retrieveXValue:(double *)a0 YValue:(double *)a1 skew:(double *)a2 scale:(double *)a3 stretch:(double *)a4 rotation:(double *)a5 forOutputImage:(id)a6 withRenderInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a7;
- (struct HGRef<HGNode> { struct HGNode *x0; })transformAndTile:(struct HGRef<HGNode> { struct HGNode *x0; })a0 withXValue:(double)a1 YValue:(double)a2 skew:(double)a3 scale:(double)a4 stretch:(double)a5 rotation:(double)a6 resolution:(struct PCVector2<double> { double x0; double x1; })a7 inputImage:(id)a8;

@end
