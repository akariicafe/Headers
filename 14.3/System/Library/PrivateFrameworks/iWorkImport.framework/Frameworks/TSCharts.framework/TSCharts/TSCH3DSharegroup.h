@class TSCH3DResourceCache, NSString, NSThread, NSMutableSet, TSCH3DSharegroupToken, TSCH3DShaderCache;
@protocol TSCH3DSharegroupDelegate;

@interface TSCH3DSharegroup : NSObject <TSUiOSMemoryWarningFlushable> {
    NSThread *mOwningThread;
    NSMutableSet *mPurgeableResourceSet;
    BOOL mDidReceiveFlush;
}

@property (nonatomic) int performance;
@property (nonatomic) id<TSCH3DSharegroupDelegate> delegate;
@property (readonly, nonatomic) TSCH3DResourceCache *resourceCache;
@property (readonly, nonatomic) TSCH3DShaderCache *shaderCache;
@property (readonly, weak, nonatomic) TSCH3DSharegroupToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueSharegroupWithOwningThread:(id)a0 token:(id)a1;

- (void).cxx_destruct;
- (void)flushIfNecessary;
- (void)dealloc;
- (void)setOwningThread:(id)a0;
- (void)flush;
- (BOOL)isOneShot;
- (BOOL)mustRunOnMainThread;
- (BOOL)isCurrentThreadOwner;
- (void)flushMemoryForResourceSet:(id)a0;
- (void)flushResourceSet:(id)a0;
- (void)forceFlushResourceSet:(id)a0;
- (void)setIfIsMoreDemandingPerformance:(int)a0;
- (void)nonThreadOwnedFlushCache;
- (id)initWithOwningThread:(id)a0 token:(id)a1;
- (struct FlushResult { BOOL x0; BOOL x1; })p_flushCacheIfNecessary;
- (void)p_flushInTargetThread;
- (BOOL)owningThreadIsNil;
- (void)flushInTargetThread;

@end
