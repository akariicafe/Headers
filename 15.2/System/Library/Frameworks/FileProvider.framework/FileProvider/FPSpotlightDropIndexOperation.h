@class NSString, CSSearchableIndex, FPSpotlightIndexer;

@interface FPSpotlightDropIndexOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_reason;
    NSString *_domainID;
}

+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)a0 index:(id)a1 completionHandler:(id /* block */)a2;

- (id)operationDescription;
- (void)main;
- (void).cxx_destruct;
- (id)initWithIndexer:(id)a0 index:(id)a1 domainID:(id)a2 reason:(id)a3;

@end
