@class PVColorSpace, PVRenderer, NSString, PVTaskTokenPool, PVLivePlayerRenderLink, PVLivePlayerThermalThrottlingPolicy;
@protocol PVLivePlayerDelegate;

@interface PVLivePlayer : NSObject {
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { struct PVGCDLock *__value_; } __ptr_; } _lock;
    struct map<unsigned int, id<PVLivePlayerSource>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, id<PVLivePlayerSource>>>> { struct __tree<std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>, std::allocator<std::__value_type<unsigned int, id<PVLivePlayerSource>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, id<PVLivePlayerSource>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, id<PVLivePlayerSource>>, std::less<unsigned int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _sourceMap;
    PVRenderer *_renderer;
    id<PVLivePlayerDelegate> _weakDelegate;
    _Atomic unsigned int _queueSize;
    _Atomic int _playerStatus;
    PVLivePlayer *_primaryPlayer;
    struct HGRef<HGRenderQueue> { struct HGRenderQueue *m_Obj; } _playerQueue;
    unsigned int _playerQueueUnitCount;
    unsigned int _activeRenderLinkJobCount;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _renderTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousSignalTime;
    BOOL _previousSignalTimeValid;
    double _lastCompletedHostTime;
    _Atomic unsigned int _frameCount;
    NSString *_name;
    _Atomic unsigned int _parentCode;
    PVTaskTokenPool *_tokenPool;
    struct unique_ptr<PerfTimer, std::default_delete<PerfTimer>> { struct __compressed_pair<PerfTimer *, std::default_delete<PerfTimer>> { struct PerfTimer *__value_; } __ptr_; } _statLogTimer;
    struct unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> { struct __compressed_pair<PVGCDLock *, std::default_delete<PVGCDLock>> { struct PVGCDLock *__value_; } __ptr_; } _perfStatsLock;
    struct unique_ptr<PVPerfStats, std::default_delete<PVPerfStats>> { struct __compressed_pair<PVPerfStats *, std::default_delete<PVPerfStats>> { struct PVPerfStats *__value_; } __ptr_; } _perfStats;
    BOOL _trackStats;
}

@property (retain, nonatomic) PVLivePlayerRenderLink *renderLink;
@property (readonly, nonatomic) int status;
@property (retain, nonatomic) PVLivePlayerThermalThrottlingPolicy *thermalThrottlingPolicy;
@property (nonatomic) unsigned int queueSize;
@property (nonatomic) BOOL lowerGCDPriority;
@property (nonatomic) BOOL lowerGPUPriority;
@property (nonatomic) BOOL bypassRenderLink;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } renderTime;
@property (retain, nonatomic) PVColorSpace *outputColorSpace;

- (void)flush;
- (void)shutdown;
- (id)initWithOptions:(id)a0 delegate:(id)a1;
- (void)setName:(id)a0;
- (void)setStatus:(int)a0;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)stop;
- (void)addStats:(const void *)a0;
- (void)setParentCode:(unsigned int)a0;
- (void)trackStats:(BOOL)a0;
- (void)setSource:(id)a0 inputID:(unsigned int)a1;
- (void)printAndClearStats:(BOOL)a0;
- (void)resetRenderTime;
- (void)renderLinkSignalSkipped;
- (void)renderLinkSignal:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)renderLinkSignalDropped;
- (void)_statsLogCheck;
- (void)updateRenderQueueUnits;
- (unsigned long long)getPackedFamilyCode:(unsigned int)a0;
- (void)_renderLinkSignal:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)_dropFrameForSaturatedPrimaryPlayer;
- (BOOL)_dropFrameForFullQueue;
- (id)getTaskToken;
- (void)_notifyDelegateOfDroppedFrame:(int)a0;
- (unsigned int)_throttledQueueSize_NoLock;
- (id)readSourceFrameSets:(double)a0;
- (void)renderLinkJobFinished:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob *x0; })a0;
- (BOOL)testOutOfOrderCompletion:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob *x0; })a0;
- (void)bypassRenderLink:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob *x0; })a0;
- (BOOL)throttledBypassRenderLink;
- (id)playerSources;
- (void)setPrimaryPlayer:(id)a0;
- (void)handleRenderLinkJob:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob *x0; })a0;
- (double)getWindowedFPS;

@end
