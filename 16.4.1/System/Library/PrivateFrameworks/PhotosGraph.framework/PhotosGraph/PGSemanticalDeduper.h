@class VNCreateSceneprintRequest, VNSequenceRequestHandler;

@interface PGSemanticalDeduper : PGDeduper {
    VNSequenceRequestHandler *_sequenceRequestHandler;
    VNCreateSceneprintRequest *_sceneprintRequest;
}

@property (nonatomic) BOOL usesAdaptiveSimilarStacking;

- (void)cleanup;
- (void)dealloc;
- (void).cxx_destruct;
- (id)deduplicatedItemsWithItems:(id)a0 debugInfo:(id)a1 progressBlock:(id /* block */)a2;
- (id)itemsNeedingSceneprintInTimeClusters:(id)a0;
- (id)sceneprintByItemIdentifierWithItems:(id)a0;

@end
