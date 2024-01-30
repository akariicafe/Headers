@interface PAEChannelMixer : PAEFilterDefaultBase

- (id)properties;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)constrainMonoParams:(int)a0 atTime:(union { double x0; struct *x1; })a1;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3 fromParam:(int)a4 atFxTime:(union { double x0; struct *x1; })a5;
- (id)initWithAPIManager:(id)a0;
- (BOOL)monochromeChanged:(union { double x0; struct *x1; })a0;
- (BOOL)parameterChanged:(unsigned int)a0;

@end
