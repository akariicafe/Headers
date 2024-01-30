@class NSObject;
@protocol OS_dispatch_queue;

@interface PVEffectScheduler : NSObject {
    struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > { struct __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, LoadableInstructionCompare> { unsigned long long __value_; } __pair3_; } __tree_; } _effectSchedule;
    struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > { struct __tree<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<HGRef<LoadableInstruction>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, LoadableInstructionCompare> { unsigned long long __value_; } __pair3_; } __tree_; } _previousScheduleToUnload;
    struct __tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__ptr_; } _lastLoadedEffectSetIterator;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _endTime;
    BOOL _loadedFinalInstructions;
    BOOL _isExporting;
    NSObject<OS_dispatch_queue> *_loadQueue;
    BOOL _isScheduling;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_effectScheduleLock;
    struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *m_Obj; } _effectLoadRenderContext;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (void)setIsExporting:(BOOL)a0;
- (void)releaseAllUnusedEffects:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)previousLoadedIteratorIsLastInList;
- (void)unloadInstructionFromPreviousSchedule;
- (void)resetSchedule:(id)a0;
- (void)resetSearchPoint;
- (void)setEffectLoadingRenderContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (void)loadEffects:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 playerRate:(float)a1;
- (BOOL)loadTimeIsNearEnd:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
