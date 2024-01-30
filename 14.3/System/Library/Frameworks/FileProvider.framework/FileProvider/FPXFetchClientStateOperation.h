@class NSString, CSSearchableIndex, FPXDomainContext;

@interface FPXFetchClientStateOperation : FPOperation {
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_domainIdentifier;
    NSString *_reason;
    FPXDomainContext *_domainContext;
}

+ (id)_currentIndexerVersion;

- (void).cxx_destruct;
- (void)_handleFetchedClientState:(id)a0 error:(id)a1;
- (id)_clientStateCurrentVersionIfNeedReset;
- (void)_markClientStateResetDone;
- (void)_fetchClientState;
- (void)main;
- (id)operationDescription;
- (id)initWithIndex:(id)a0 context:(id)a1 indexName:(id)a2 domainID:(id)a3 reason:(id)a4;

@end
