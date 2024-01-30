@class NSString, SUICKPCardViewControllerProvider;

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding> {
    SUICKPCardViewControllerProvider *_cardViewControllerProvider;
}

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)displayPriorityForCard:(id)a0;
- (id)cardViewControllerForCard:(id)a0;
- (void)presentation:(id)a0 didApplyCardSectionViewSource:(id)a1 toCardViewController:(id)a2;
- (void)requestCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;

@end
