@interface PAEHSCurvesEffect : PAEBaseCorrectorEffect {
    int _gradingMode;
    BOOL _preserveLuma;
}

- (void)dealloc;
- (BOOL)useLegacyCoding;
- (void)_registerColorCurveParameter:(int)a0 name:(id)a1 red:(double)a2 green:(double)a3 blue:(double)a4;
- (void)_registerHueCurveParameter:(int)a0 name:(id)a1;
- (void)_registerOffsetColorCurveParameter:(int)a0 name:(id)a1 red:(double)a2 green:(double)a3 blue:(double)a4;
- (void)_setGradingMode:(int)a0;
- (BOOL)addParameters;
- (Class)classForCustomParameterID:(unsigned int)a0;
- (id)initWithAPIManager:(id)a0;
- (BOOL)needsOSCsIn360Groups;
- (BOOL)overrideRender:(id)a0 withOutputImage:(id)a1 inputImage:(id)a2 input:(void *)a3 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a4;
- (BOOL)parameterChanged:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 paramID:(unsigned int)a2 customChannelData:(id)a3;
- (BOOL)resync:(id)a0 atTime:(union { double x0; struct *x1; })a1 paramID:(unsigned int)a2 customChannelData:(id *)a3;
- (void)resyncOnce:(id)a0 atTime:(union { double x0; struct *x1; })a1;
- (id)shouldDeselectOtherMasks:(id)a0;

@end
