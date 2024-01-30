@class NTKCubicSpline;

@interface NTKCubicColorCurve : NTKColorCurve {
    NTKCubicSpline *_spline;
    void *_colors;
    float *_fractions;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void /* unknown type, empty encoding */)rgbfColorForFraction:(double)a0;
- (id)initWithCubicColorCurveElements:(id)a0;
- (id)initWithColorCurveElements:(id)a0;
- (id)colorForFraction:(float)a0;

@end
