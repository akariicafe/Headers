@class NSArray, STExecutableIdentityResolver, STReferenceCountedCache;

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}

@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)resolveEntity:(id)a0;
- (id)beginBatchResolutionSession;
- (id)init;
- (void).cxx_destruct;

@end
