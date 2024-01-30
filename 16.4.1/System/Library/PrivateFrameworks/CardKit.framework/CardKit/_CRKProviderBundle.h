@class NSString;
@protocol CRKProviding;

@interface _CRKProviderBundle : NSBundle <CRKIdentifiedProviding> {
    id<CRKProviding> _provider;
}

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provider;
- (void).cxx_destruct;
- (void)requestIdentifiedCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;
- (void)_initializeProviderWithClass:(Class)a0;
- (id)cardViewControllerForCard:(id)a0;
- (unsigned long long)displayPriorityForCard:(id)a0;
- (void)presentation:(id)a0 didApplyCardSectionViewSource:(id)a1 toCardViewController:(id)a2;
- (void)requestCardSectionViewProviderForCard:(id)a0 delegate:(id)a1 reply:(id /* block */)a2;

@end
