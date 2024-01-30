@class AVVideoComposition, NSString, NSDictionary, PVEffectScheduler, PVTaskTokenPool, NSObject, PVVideoCompositingContext;
@protocol OS_dispatch_queue;

@interface PVVideoCompositing : PVRendererBase <AVVideoCompositing> {
    AVVideoComposition *_videoComposition;
    NSDictionary *_sourceAttributes;
    NSDictionary *_destinationBufferPoolAttributes;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _videoCompositionDuration;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_trackerLock;
    struct deque<int, std::allocator<int>> { struct __split_buffer<int *, std::allocator<int *>> { int **__first_; int **__begin_; int **__end_; struct __compressed_pair<int **, std::allocator<int *>> { int **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<int>> { unsigned long long __value_; } __size_; } _dropFrameTracker;
    int _windowedDropTotal;
    BOOL _droppedResolution;
    PVEffectScheduler *_effectScheduler;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _schedulingTime;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_playerRateLock;
    float _playerRate;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_throttleLock;
    unsigned int _throttleRequestHandling;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_cancelPendingLock;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_notificationStateLock;
    BOOL _hostAppIsShuttingDown;
    BOOL _didEnterBackground;
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
    NSObject<OS_dispatch_queue> *_refreshCompletionCallbackQueue;
    PVTaskTokenPool *_tokenPool;
}

@property (class, nonatomic) BOOL flushOnFinalRelease;

@property (retain) PVVideoCompositingContext *videoCompositingContext;
@property (nonatomic) BOOL thumbnailCompositing;
@property (nonatomic) BOOL cancelsPendingRequests;
@property (copy, nonatomic) id /* block */ refreshCompletionBlock;
@property (nonatomic) unsigned int minimumRequestCompletionTimeMS;
@property unsigned int parentCode;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;
@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willEnterForeground:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)applicationWillTerminate:(id)a0;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (id).cxx_construct;
- (void)renderContextChanged:(id)a0;
- (void)startVideoCompositionRequest:(id)a0;
- (void)cancelAllPendingVideoCompositionRequests;
- (float)playerRate;
- (void)setPlayerRate:(float)a0;
- (void)signalScheduling:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 playerRate:(float)a1;
- (void)signalSchedulingResetSearch;
- (void)didRecieveMemoryWarning:(id)a0;
- (void)updateDestinationFormatForOutputColorSpace;
- (BOOL)shouldDoLowPowerExport;
- (void)renderRequestFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob *x0; })a0;
- (void)setupTextureFactories;
- (void)setupEffectScheduler;
- (void)setSchedulingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })schedulingTime;
- (void)videoCompositionChanged:(id)a0;
- (void)setColorSpacesFromDestinationBuffer:(id)a0;
- (void)_validateDestinationBufferColorSpace:(id)a0;
- (BOOL)inPlayback;
- (void)callRefreshCompletionBlock:(BOOL)a0;

@end
