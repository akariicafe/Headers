@class NSString, SUICKPCardViewControllerProvider;
@protocol SUICKPCATExecutor;

@interface SUICKPEntryPoint : NSObject <CRKIdentifiedProviding> {
    SUICKPCardViewControllerProvider *_cardViewControllerProvider;
    id<SUICKPCATExecutor> _catExecutor;
}

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
- (id)cardViewControllerForCard:(id)a0;
- (unsigned long long)displayPriorityForCard:(id)a0;
- (void)presentation:(id)a0 didApplyCardSectionViewSource:(id)a1 toCardViewController:(id)a2;
- (void)requestCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
- (id)initWithCATExecutor:(id)a0;
- (void)mutateResponseSections:(id)a0 completion:(id /* block */)a1;

@end
