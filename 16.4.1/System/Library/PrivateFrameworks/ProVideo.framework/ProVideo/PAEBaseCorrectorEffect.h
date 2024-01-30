@class NSObject;
@protocol OS_dispatch_queue, PROAPIAccessing;

@interface PAEBaseCorrectorEffect : NSObject <FxFilter> {
    id<PROAPIAccessing> _apiManager;
    void *_resyncOnce;
    NSObject<OS_dispatch_queue> *_resyncQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _resyncMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _resyncCondition;
    void *_actionCount;
    int _hostApplication;
}

@property (readonly) id<PROAPIAccessing> apiManager;

+ (unsigned long long)colorPrimaries:(id)a0;
+ (id)getterAPI:(id)a0;
+ (id)keyframingAPI:(id)a0;
+ (id)setterAPI:(id)a0;
+ (id)temporalImageAPI:(id)a0;

- (id)properties;
- (void)dealloc;
- (void)_resyncAtTime:(const union { double x0; struct *x1; } *)a0 apiManager:(id)a1;
- (void)_resyncOnceAtTime:(const union { double x0; struct *x1; } *)a0 apiManager:(id)a1;
- (BOOL)addParameters;
- (id)apiManager;
- (id)customChannelData:(id)a0 ofParamID:(unsigned int)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)frameCleanup;
- (BOOL)frameSetup:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a0 inputInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a1 hardware:(BOOL *)a2 software:(BOOL *)a3;
- (BOOL)getOutputWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 withInput:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; BOOL x7; double x8; })a2 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a3;
- (BOOL)hostIsFCP;
- (BOOL)hostIsMotion;
- (id)initWithAPIManager:(id)a0;
- (BOOL)isACEScctGammaCorrected;
- (void *)newNodeForCorrector;
- (BOOL)oscIsPublishable;
- (BOOL)overrideRender:(id)a0 withOutputImage:(id)a1 inputImage:(id)a2 input:(void *)a3 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a4;
- (BOOL)parameterChanged:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 paramID:(unsigned int)a2 customChannelData:(id)a3;
- (id)parameterCreationAPI;
- (BOOL)renderOutput:(id)a0 withInput:(id)a1 withInfo:(struct { union { double x0; struct *x1; } x0; unsigned long long x1; unsigned long long x2; double x3; double x4; unsigned long long x5; })a2;
- (void)resync:(id)a0 atTime:(union { double x0; struct *x1; })a1;
- (BOOL)resync:(id)a0 atTime:(union { double x0; struct *x1; })a1 paramID:(unsigned int)a2 customChannelData:(id *)a3;
- (void)resyncOnce:(id)a0 atTime:(union { double x0; struct *x1; })a1;
- (void)setParameters:(id)a0 onNodeCorrector:(void *)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)variesOverTime;
- (id)versionsingAPI;

@end
