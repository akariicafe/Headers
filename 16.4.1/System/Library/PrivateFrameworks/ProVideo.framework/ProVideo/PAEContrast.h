@interface PAEContrast : PAEFilterDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (struct CGPoint { double x0; double x1; })calculateBezier:(double)a0 startPt:(struct CGPoint { double x0; double x1; })a1 controlPoint1:(struct CGPoint { double x0; double x1; })a2 controlPoint2:(struct CGPoint { double x0; double x1; })a3 endPt:(struct CGPoint { double x0; double x1; })a4;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (void)generateLut:(struct RGBAfPixel { float x0; float x1; float x2; float x3; } *)a0 forContrast:(double)a1 andPivot:(double)a2;
- (id)initWithAPIManager:(id)a0;

@end
