@class NSString, PVRenderRequest, PVRenderer, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate> {
    PVRenderer *m_pvRenderer;
    PVRenderRequest *m_request;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } m_renderManager;
    id /* block */ m_completionHandler;
    struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; struct HGRef<HGBitmap> *x1; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; } x2; } *m_destinationBitmaps;
}

@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)jobTypeTag;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)finishCancelledJob;
- (int)jobPriority;
- (int)graphBuildThreadPriority;
- (int)renderContextPriority;
- (void)buildGraph:(struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> *x0; struct HGRef<HGNode> *x1; struct __compressed_pair<HGRef<HGNode> *, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> *x0; } x2; } *)a0 renderContext:(const struct HGRenderContext { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice *x0; struct __shared_weak_count *x1; } x2; int x3; int x4; int x5; struct HGRenderQueue *x6; struct HGSynchronizable *x7; struct HGSynchronizer *x8; struct HGRenderer *x9; int x10; int x11; int x12; BOOL x13; unsigned long long x14; unsigned long long x15; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x16; } *)a1 frameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a2;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; struct HGRef<HGBitmap> *x1; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; } x2; } *)a0 renderContext:(const struct HGRenderContext { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice *x0; struct __shared_weak_count *x1; } x2; int x3; int x4; int x5; struct HGRenderQueue *x6; struct HGSynchronizable *x7; struct HGSynchronizer *x8; struct HGRenderer *x9; int x10; int x11; int x12; BOOL x13; unsigned long long x14; unsigned long long x15; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x16; } *)a1 frameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a2;
- (void)finishCompletedJob;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (unsigned long long)packedFamilyCode;
- (unsigned int)outputCVPixelBufferFormat;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1 pvRenderer:(id)a2;

@end
