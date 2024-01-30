@class PPLocalNamedEntityStore, PPUniversalSearchSpotlightIndexScorer;

@interface PPSpotlightWritebackDissector : NSObject {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    BOOL _significanceCheckEnabled;
}

+ (id)sharedCache;
+ (BOOL)bundleIdIsAllowed:(id)a0;

- (BOOL)consumeContentFromBundleId:(id)a0 extractions:(id)a1 spotlightIdentifier:(id)a2 fileProtectionType:(id)a3 shouldContinueBlock:(id /* block */)a4;
- (id)initWithNamedEntityStore:(id)a0 significanceCheckEnabled:(BOOL)a1;
- (id)init;
- (void)_getNamedEntityPortraitScores:(id)a0 priorityQueue:(id)a1;
- (void).cxx_destruct;

@end
