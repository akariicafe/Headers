@class NSCountedSet, TSCH3DResourceCache, TSCH3DDocumentDataCache, TSCH3DContext, TSCH3DGPUSharegroup, NSMutableSet;

@interface TSCH3DSession : NSObject {
    BOOL _interactiveCanvas;
    unsigned long long _failures;
    TSCH3DContext *_context;
    TSCH3DResourceCache *_cache;
    TSCH3DGPUSharegroup *_sharegroup;
    NSMutableSet *_activeResourceSet;
    NSMutableSet *_allResourceSet;
    NSCountedSet *_scopeProtectedResourceSet;
    long long _virtualScreen;
}

@property (readonly, nonatomic) TSCH3DContext *context;
@property (readonly, nonatomic) TSCH3DContext *sharegroupContext;
@property (nonatomic) int performance;
@property (readonly, nonatomic) BOOL hasFailed;
@property (readonly, nonatomic) BOOL isOneShot;
@property (readonly, nonatomic) BOOL mustRunOnMainThread;
@property (nonatomic) long long virtualScreen;
@property (readonly, nonatomic) TSCH3DDocumentDataCache *dataCache;

- (void)addActiveResource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)p_lock;
- (void)setFailed;
- (BOOL)isProtectedResource:(id)a0;
- (BOOL)hasEnoughFreeMemoryOfBytes:(unsigned long long)a0;
- (void)flushMemoryForResources:(id)a0;
- (void)garbageCollectAllUnretainedResources;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;
- (void)setIfIsMoreDemandingPerformance:(int)a0;
- (id)initWithSharegroupToken:(id)a0 dataCache:(id)a1;
- (void)resetFailures;
- (id)p_contextOrNil;
- (void)p_setContext:(id)a0;
- (id)handleOfResource:(id)a0 loader:(id)a1;
- (id)loadResource:(id)a0 reload:(BOOL)a1 withLoader:(id)a2 config:(id)a3;
- (void)trackResourcesInBlock:(id /* block */)a0;
- (void)flushResourcesIfNecessary;
- (void)protectResource:(id)a0 unprotectOnFail:(BOOL)a1;
- (void)unprotectResource:(id)a0 clearOnFailProtection:(BOOL)a1;
- (void)resetTrackingToActiveResources;
- (void)flushTrackedResources;
- (void)flushResources:(id)a0;
- (void)forceFlushResources:(id)a0;
- (void)beginFrameWithSharegroupDelegate:(id)a0;
- (void)endFrameWithSharegroupDelegate:(id)a0;
- (void)p_unlock;

@end
