@class NSProgress, NSString, NSArray;

@interface FPVendorDefinedActionOperation : FPActionOperation {
    NSProgress *_remoteProgress;
    NSString *_actionIdentifier;
    NSArray *_itemIdentifiers;
    NSString *_domainIdentifier;
}

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 providerDomainID:(id)a1 itemIdentifiers:(id)a2;
- (void)actionMain;

@end
