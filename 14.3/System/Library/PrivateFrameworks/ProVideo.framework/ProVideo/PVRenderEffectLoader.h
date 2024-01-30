@interface PVRenderEffectLoader : NSObject {
    struct deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem> > { struct __split_buffer<PVLoadedEffectItem *, std::__1::allocator<PVLoadedEffectItem *> > { struct PVLoadedEffectItem **x0; struct PVLoadedEffectItem **x1; struct PVLoadedEffectItem **x2; struct __compressed_pair<PVLoadedEffectItem **, std::__1::allocator<PVLoadedEffectItem *> > { struct PVLoadedEffectItem **x0; } x3; } x0; unsigned long long x1; struct __compressed_pair<unsigned long, std::__1::allocator<PVLoadedEffectItem> > { unsigned long long x0; } x2; } *_loadedEffects;
    struct HGSynchronizable { void /* function */ **x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; struct _opaque_pthread_t *x2; unsigned long long x3; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x4; } *_lock;
    BOOL _flushesOnEffectStackChanges;
}

@property (nonatomic) float unusedEffectTimeout;

- (id)init;
- (void)dealloc;
- (void)unloadEffects;
- (void)_removeUnusedEffects_noLock:(id)a0;
- (void)_loadEffects_noLock:(id)a0;
- (void)_removeTimedOutEffects_noLock;
- (void)loadEffectsForGraphs:(id)a0 loadContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)ageOutEffects;

@end
