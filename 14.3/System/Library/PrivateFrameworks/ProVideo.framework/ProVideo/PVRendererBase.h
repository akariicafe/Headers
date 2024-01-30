@class NSString, PVVideoCompositingContext, NSLock;

@interface PVRendererBase : NSObject {
    struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int __a_value; } __a_; } _frameCount;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > > { struct HGRef<PVRenderJob> *__begin_; struct HGRef<PVRenderJob> *__end_; struct __compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > > { struct HGRef<PVRenderJob> *__value_; } __end_cap_; } _inFlightRenderJobs;
    NSLock *_inFlightRenderJobsLock;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_perfStatsLock;
    struct PVPerfStats { double x0; int x1; struct OnceStats { double x0; double x1; } x2; struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats *x0; struct FrameStats *x1; struct __compressed_pair<PVPerfStats::FrameStats *, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats *x0; } x2; } x3; BOOL x4; struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } x5; struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } x6; struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } x7; struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } x8; struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } x9; struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } x10; double x11; struct PlaybackRateCalculator { struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > *x0; long long x1; long long x2; BOOL x3; unsigned int x4; } x12; id x13; struct FrameStatsDescription *x14; } *_perfStats;
    BOOL _trackStats;
    BOOL _hasRendered;
}

@property (retain, nonatomic) PVVideoCompositingContext *compositingContext;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL immediatelyCancelPendingRequests;

+ (id)getEAGLShareGroup;

- (unsigned int)frameCount;
- (id)initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (double)numFrames;
- (void)setOutputColorSpace:(id)a0;
- (void)printAndClearStats;
- (void)trackStats:(BOOL)a0;
- (void)printAndClearStats:(BOOL)a0;
- (void)cleanupMemoryCaches;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (void)didRecieveMemoryWarning:(id)a0;
- (void)_initOutputColorSpace:(id)a0;
- (void)updateDestinationFormatForOutputColorSpace;
- (void)cancelAllPendingRequests;
- (void)addRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (void)addFrameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a0;
- (struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })startJobForDelegate:(id)a0 frameStats:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; })a1;
- (struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; })newFrameStatsForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inPlayback:(BOOL)a1;
- (double)getTimeSinceLast:(struct FrameStats { unsigned int x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; double x2; double x3; double x4; BOOL x5; BOOL x6; unsigned int x7; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x8; } *)a0;
- (double)windowedFPS;
- (double)averageStat:(int)a0;
- (double)getLastStat:(int)a0;
- (unsigned long long)taskResidentSize;

@end
