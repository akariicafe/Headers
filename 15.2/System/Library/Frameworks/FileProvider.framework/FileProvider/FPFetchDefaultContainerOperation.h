@class LSApplicationRecord, NSString;

@interface FPFetchDefaultContainerOperation : FPActionOperation {
    LSApplicationRecord *_requestedRecord;
    NSString *_domainIdentifier;
}

@property (copy, nonatomic) id /* block */ fetchCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)actionMain;
- (id)initForApplicationRecord:(id)a0 providerDomain:(id)a1;

@end
