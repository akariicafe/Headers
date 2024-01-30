@class PVEffect, NSString, PVRendererBase, PVVideoCompositingContext;

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate> {
    PVEffect *m_effect;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } m_time;
    struct CGImage { } *m_input;
    struct HGRef<HGNode> { struct HGNode *m_Obj; } m_inputHGNode;
    struct CGSize { double width; double height; } m_outputSize;
    id /* block */ m_completionHandler;
    PVRendererBase *m_pvRenderer;
    struct HGRef<HGCVBitmap> { struct HGCVBitmap *m_Obj; } m_outputCVBitmap;
    struct PVImageProperties { unsigned int cvPixelFormat; int bitsPerPixel; unsigned int alphaInfo; struct CGColorSpace *cgColorSpaceRef; } m_imageCreationProperties;
}

@property (readonly) unsigned int jobTypeTag;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)jobTypeTag;
+ (void)cleanupCaches;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)finishCancelledJob;
- (int)jobPriority;
- (void)buildGraph:(struct vector<HGRef<HGNode>, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> *x0; struct HGRef<HGNode> *x1; struct __compressed_pair<HGRef<HGNode> *, std::__1::allocator<HGRef<HGNode> > > { struct HGRef<HGNode> *x0; } x2; } *)a0 renderContext:(const struct HGRenderContext { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice *x0; struct __shared_weak_count *x1; } x2; int x3; int x4; int x5; struct HGRenderQueue *x6; struct HGSynchronizable *x7; struct HGSynchronizer *x8; struct HGRenderer *x9; int x10; int x11; int x12; BOOL x13; unsigned long long x14; unsigned long long x15; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x16; } *)a1 frameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a2;
- (int)renderThreadPriority;
- (void)setupDestinationBuffers:(struct vector<HGRef<HGBitmap>, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; struct HGRef<HGBitmap> *x1; struct __compressed_pair<HGRef<HGBitmap> *, std::__1::allocator<HGRef<HGBitmap> > > { struct HGRef<HGBitmap> *x0; } x2; } *)a0 renderContext:(const struct HGRenderContext { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice *x0; struct __shared_weak_count *x1; } x2; int x3; int x4; int x5; struct HGRenderQueue *x6; struct HGSynchronizable *x7; struct HGSynchronizer *x8; struct HGRenderer *x9; int x10; int x11; int x12; BOOL x13; unsigned long long x14; unsigned long long x15; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x16; } *)a1 frameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a2;
- (void)finishCompletedJob;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (unsigned long long)packedFamilyCode;
- (void)_setupInputHGNode:(const struct HGRenderContext { void /* function */ **x0; struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x1; struct shared_ptr<const HGComputeDevice> { struct HGComputeDevice *x0; struct __shared_weak_count *x1; } x2; int x3; int x4; int x5; struct HGRenderQueue *x6; struct HGSynchronizable *x7; struct HGSynchronizer *x8; struct HGRenderer *x9; int x10; int x11; int x12; BOOL x13; unsigned long long x14; unsigned long long x15; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x16; } *)a0 frameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a1;
- (struct CGImage { } *)_makeResultImage;
- (id)initWEffect:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 inputImage:(struct CGImage { } *)a2 outputSize:(struct CGSize { double x0; double x1; })a3 completionHandler:(id /* block */)a4 pvRenderer:(id)a5;

@end
