@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource

@property (class, readonly, nonatomic) MPStoreArtworkDataSource *sharedStoreArtworkDataSource;

- (id)sortedSupportedSizesForCatalog:(id)a0;
- (BOOL)wantsBackgroundImageDecompression;
- (struct CGSize { double x0; double x1; })bestAvailableSizeForCatalog:(id)a0;
- (BOOL)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)supportedSizesForCatalog:(id)a0;
- (struct CGSize { double x0; double x1; })_bestSizeForImageSizeInfo:(id)a0 catalog:(id)a1;
- (id)requestForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)_bestURLForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (struct CGSize { double x0; double x1; })_clampImageSize:(struct CGSize { double x0; double x1; })a0 toMaxSupportedSize:(struct CGSize { double x0; double x1; })a1;
- (id)cacheKeyForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;

@end
