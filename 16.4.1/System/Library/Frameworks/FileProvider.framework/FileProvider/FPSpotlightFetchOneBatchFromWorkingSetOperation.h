@class FPSpotlightIndexer, NSArray, FPSpotlightIndexState, NSData, NSError, FPXDomainContext;

@interface FPSpotlightFetchOneBatchFromWorkingSetOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    FPSpotlightIndexState *_indexState;
}

@property (retain, nonatomic) NSArray *updatedItems;
@property (retain, nonatomic) NSArray *deletedItemIDs;
@property (retain, nonatomic) NSData *nextAnchor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSError *error;

- (void)main;
- (void)_indexOneChangesBatchFromChangeToken:(id)a0;
- (id)observerItemID;
- (void)_indexOnePageFromPage:(id)a0;
- (void)handleInsertedItems:(id)a0 deletedItems:(id)a1 needsMoreWork:(BOOL)a2 state:(id)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)initWithIndexer:(id)a0 queue:(id)a1;

@end
