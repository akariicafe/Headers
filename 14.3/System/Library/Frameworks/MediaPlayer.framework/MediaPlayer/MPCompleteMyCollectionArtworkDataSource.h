@interface MPCompleteMyCollectionArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (long long)_artworkTypeForCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)sortedSupportedSizesForCatalog:(id)a0;
- (id)supportedSizesForCatalog:(id)a0;

@end
