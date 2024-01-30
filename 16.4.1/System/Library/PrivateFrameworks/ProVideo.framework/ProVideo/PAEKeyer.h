@class PAEKeyerMatteTools, PAEKeyerPreprocess;

@interface PAEKeyer : PAEFilterDefaultBase {
    void *_omSamples;
    BOOL _isMotion;
    BOOL _toggledAdvancedMode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _prevRationalTime;
    union { double frame; struct *seconds; } _prevRectanglesFrame;
    void *_lutsBitmapLoaderCache;
    struct PCMutex { void /* function */ **_vptr$PCMutex; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _Mutex; } _cacheMutex;
    PAEKeyerMatteTools *_matteTools;
    PAEKeyerPreprocess *_preprocessTools;
}

- (id).cxx_construct;
- (id)properties;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)pullInitialKey:(id *)a0;
- (BOOL)addParameters;
- (id)apiManager;
- (double)autokeyAmountToHistoPercent:(double)a0;
- (BOOL)canThrowRenderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (void)clearKey;
- (void)computeModel:(BOOL)a0 atTime:(union { double x0; struct *x1; })a1;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (id)getBlendOptionsAtTime:(union { double x0; struct *x1; })a0;
- (int)getColorPrimaries;
- (void)getInputWidth:(float *)a0 height:(float *)a1 renderInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (struct HGRef<HGNode> { struct HGNode *x0; })getKeyerNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 omKeyer:(void *)a1 atTime:(union { double x0; struct *x1; })a2;
- (id)initWithAPIManager:(id)a0;
- (BOOL)is3DHistoExpandedForHDR;
- (BOOL)isApplyTuningForRec2020;
- (BOOL)isLumaKey;
- (BOOL)isLutExpandedForHDR;
- (BOOL)isSimpleKey;
- (BOOL)isWideGamutHDR;
- (BOOL)sampleEdge:(void *)a0 renderInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; } *)a1 width:(float)a2 height:(float)a3;
- (BOOL)sampleRect:(void *)a0 renderInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; } *)a1 width:(float)a2 height:(float)a3;
- (void)setInitialSamples:(void *)a0;
- (BOOL)use32x32Histogram;

@end
