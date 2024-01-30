@class NSString, SUICKPCardViewControllerProvider;

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding> {
    SUICKPCardViewControllerProvider *_cardViewControllerProvider;
}

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)displayPriorityForCard:(id)a0;
- (id)cardViewControllerForCard:(id)a0;
- (void)presentation:(id)a0 didApplyCardSectionViewSource:(id)a1 toCardViewController:(id)a2;
- (void)requestCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;

@end
