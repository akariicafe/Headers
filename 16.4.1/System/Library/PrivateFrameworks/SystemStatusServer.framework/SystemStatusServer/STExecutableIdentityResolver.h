@class STReferenceCountedCache;

@interface STExecutableIdentityResolver : NSObject <STExecutableIdentityResolving> {
    STReferenceCountedCache *_cache;
}

- (id)beginBatchResolutionSession;
- (id)resolvedIdentityForIdentity:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
