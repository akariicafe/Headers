@class FPProviderDomain;

@interface DOCSearchingDocumentSource : DOCDocumentSource {
    FPProviderDomain *_providerDomain;
}

- (void).cxx_destruct;
- (id)icon;
- (void)setIcon:(id)a0;
- (id)supportedSearchFilters;
- (id)initWithProviderDomain:(id)a0;

@end
