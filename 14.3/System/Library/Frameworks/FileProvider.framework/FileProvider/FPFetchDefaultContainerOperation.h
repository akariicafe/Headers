@class NSString;

@interface FPFetchDefaultContainerOperation : FPActionOperation {
    NSString *_defaultName;
    NSString *_appIdentifier;
    NSString *_domainIdentifier;
}

@property (copy, nonatomic) id /* block */ fetchCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initForApplicationProxy:(id)a0 providerDomain:(id)a1;
- (void)actionMain;

@end
