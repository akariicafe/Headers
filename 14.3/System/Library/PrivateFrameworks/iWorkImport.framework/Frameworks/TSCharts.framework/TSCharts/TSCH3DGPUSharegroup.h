@class TSCH3DContext, NSRecursiveLock;

@interface TSCH3DGPUSharegroup : TSCH3DSharegroup {
    TSCH3DContext *mGPUContext;
    long long mLockLevel;
    NSRecursiveLock *mLock;
}

+ (id)sharegroupForToken:(id)a0;
+ (BOOL)hasInterestForSharegroupToken:(id)a0;
+ (void)addInterestForSharegroupTokens:(id)a0;
+ (void)removeInterestForSharegroupTokens:(id)a0;
+ (void)flushSharegroupForToken:(id)a0;
+ (void)deleteSharegroupForToken:(id)a0;

- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (id)description;
- (id)GPUContext;
- (void)garbageCollectAllUnretainedResources;
- (void)garbageCollectResources:(id)a0;
- (id)initWithOwningThread:(id)a0 token:(id)a1;
- (void)p_owningThreadWillChange;
- (void)p_flushCache;
- (void)p_flushPurgeableResourceSet;
- (void)p_forceFlushResourceSet:(id)a0;
- (id)targetThreadForFlushing;
- (BOOL)debug_isInteractive;
- (id)initWithOwningThread:(id)a0 token:(id)a1 context:(id)a2;
- (void)p_clearContextInCurrentThread;
- (void)updateSharegroupMapToken:(id)a0;

@end
