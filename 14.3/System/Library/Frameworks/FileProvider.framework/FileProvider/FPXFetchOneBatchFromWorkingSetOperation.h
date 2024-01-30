@class FPXIndexState, NSArray, NSData, NSError, FPXSpotlightIndexer, FPXDomainContext;

@interface FPXFetchOneBatchFromWorkingSetOperation : FPOperation {
    FPXSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    FPXIndexState *_indexState;
}

@property (retain, nonatomic) NSArray *updatedItems;
@property (retain, nonatomic) NSArray *deletedItemIDs;
@property (retain, nonatomic) NSData *nextAnchor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)observerItemID;
- (void)handleInsertedItems:(id)a0 deletedItems:(id)a1 needsMoreWork:(BOOL)a2 state:(id)a3 error:(id)a4;
- (void)_indexOnePageFromPage:(id)a0;
- (void)_indexOneChangesBatchFromChangeToken:(id)a0;
- (void)main;
- (id)initWithIndexer:(id)a0 queue:(id)a1;

@end
