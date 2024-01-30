@class FPProviderDomain;

@interface DOCSearchingDocumentSource : DOCDocumentSource {
    FPProviderDomain *_providerDomain;
}

- (id)supportedSearchFilters;
- (id)icon;
- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (id)initWithProviderDomain:(id)a0;

@end
