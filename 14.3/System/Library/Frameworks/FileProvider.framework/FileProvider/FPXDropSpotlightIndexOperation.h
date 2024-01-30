@class NSString, CSSearchableIndex, FPXDomainContext;

@interface FPXDropSpotlightIndexOperation : FPOperation {
    CSSearchableIndex *_index;
    NSString *_reason;
    NSString *_domainID;
    FPXDomainContext *_domainContext;
}

+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)a0 index:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)main;
- (id)operationDescription;
- (id)initWithIndex:(id)a0 context:(id)a1 domainID:(id)a2 reason:(id)a3;

@end
