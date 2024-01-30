@class NSArray, NSData, NSError, FPXSpotlightIndexer, FPXDomainContext;

@interface FPXIndexOneBatchOperation : FPOperation {
    FPXSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    BOOL _isInitialIndexing;
    BOOL _isOutOfBandIndexing;
    unsigned long long _logSection;
}

@property (retain, nonatomic) NSArray *updatedItems;
@property (retain, nonatomic) NSArray *deletedItemIDs;
@property (retain, nonatomic) NSData *nextAnchor;
@property (retain, nonatomic) NSError *fetchError;
@property (copy, nonatomic) id /* block */ canIndexFromCurrentState;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithIndexer:(id)a0 isInitialIndexing:(BOOL)a1 isOutOfBandIndexing:(BOOL)a2 queue:(id)a3;

@end
