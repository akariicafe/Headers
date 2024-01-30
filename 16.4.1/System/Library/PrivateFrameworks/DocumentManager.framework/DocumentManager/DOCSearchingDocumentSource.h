@class FPProviderDomain;

@interface DOCSearchingDocumentSource : DOCDocumentSource {
    FPProviderDomain *_providerDomain;
}

- (id)supportedSearchFilters;
- (void).cxx_destruct;
- (id)initWithProviderDomain:(id)a0;
- (id)loadIconForSize:(long long)a0;

@end
