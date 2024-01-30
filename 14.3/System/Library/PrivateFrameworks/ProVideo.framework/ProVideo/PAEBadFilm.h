@class NSMutableArray, PAEEarthquake;

@interface PAEBadFilm : PAEFilterDefaultBase {
    PAEEarthquake *_jitterer;
    int _cachedSeed;
    NSMutableArray *_scratches;
    struct PCMutex { void /* function */ **_vptr$PCMutex; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _Mutex; } _scratchMutex;
}

- (id)properties;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithAPIManager:(id)a0;
- (BOOL)addParameters;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (BOOL)variesOverTime;
- (double)autoRandomize:(double)a0 withVariance:(double)a1 andFrequency:(int)a2 atTime:(union { double x0; struct *x1; })a3 randCount:(int *)a4;
- (void)setupScratchArrayWithAutoRandomizeFrequency:(int)a0 andSeed:(int)a1 withWidth:(int)a2 andHeight:(int)a3 atTime:(union { double x0; struct *x1; })a4;
- (void)getBrightness:(double *)a0 saturation:(double *)a1 dust:(int *)a2 scratches:(int *)a3 scratchColor:(double *)a4 hair:(int *)a5 randomSeed:(int *)a6 jitter:(double *)a7 focus:(double *)a8 grain:(double *)a9 autoRandFreq:(int *)a10 withParmsAPI:(id)a11 atTime:(union { double x0; struct *x1; })a12;
- (void)createDust:(int)a0 scratches:(int)a1 scratchColor:(double *)a2 hair:(int)a3 randomSeed:(int)a4 autoRandFreq:(int)a5 buffer:(struct HGBitmap { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; int x2; int x3; struct HGRect { int x0; int x1; int x2; int x3; } x4; struct HGRect { int x0; int x1; int x2; int x3; } x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; void *x9; void *x10; struct HGEdgePolicy { int x0; float x1[4]; } x11; struct HGObject *x12; } *)a6 atTime:(union { double x0; struct *x1; })a7 pixelTransform:(const struct PCMatrix44Tmpl<double> { double x0[4][4]; } *)a8;

@end
