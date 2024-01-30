@class NSString, PPUniversalSearchSpotlightIndexScorer, PPLocalNamedEntityStore, NSCache;

@interface SGSpotlightWritebackDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing> {
    PPUniversalSearchSpotlightIndexScorer *_scorer;
    PPLocalNamedEntityStore *_namedEntityStore;
    NSCache *_namedEntityScoreCache;
    BOOL _significanceCheckEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bundleIdIsAllowed:(id)a0;

- (void)dissect:(id)a0 entity:(id)a1 context:(id)a2;
- (id)initWithNamedEntityStore:(id)a0 significanceCheckEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_getNamedEntityPortraitScores:(id)a0 priorityQueue:(id)a1;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end
