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
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setFailed;
- (void)flushResources:(id)a0;
- (void)endFrameWithSharegroupDelegate:(id)a0;
- (void)beginFrameWithSharegroupDelegate:(id)a0;
- (void)flushMemoryForResources:(id)a0;
- (void)flushResourcesIfNecessary;
- (void)flushTrackedResources;
- (void)forceFlushResources:(id)a0;
- (void)garbageCollectAllUnretainedResources;
- (id)handleOfResource:(id)a0 loader:(id)a1;
- (BOOL)hasEnoughFreeMemoryOfBytes:(unsigned long long)a0;
- (id)initWithSharegroupToken:(id)a0 dataCache:(id)a1;
- (BOOL)isProtectedResource:(id)a0;
- (id)loadResource:(id)a0 reload:(BOOL)a1 withLoader:(id)a2 config:(id)a3;
- (id)p_contextOrNil;
- (void)p_lock;
- (void)p_setContext:(id)a0;
- (void)p_unlock;
- (void)protectResource:(id)a0 unprotectOnFail:(BOOL)a1;
- (void)resetFailures;
- (void)resetTrackingToActiveResources;
- (void)setIfIsMoreDemandingPerformance:(int)a0;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;
- (void)trackResourcesInBlock:(id /* block */)a0;
- (void)unprotectResource:(id)a0 clearOnFailProtection:(BOOL)a1;

@end
