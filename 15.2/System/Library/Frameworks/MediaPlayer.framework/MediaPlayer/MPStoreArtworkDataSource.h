@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    long long _totalImageRequestCount;
    long long _HEICImageRequestCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) MPStoreArtworkDataSource *sharedStoreArtworkDataSource;

@property (nonatomic) double maxHEICRequestPercentage;

- (struct CGSize { double x0; double x1; })bestAvailableSizeForCatalog:(id)a0;
- (BOOL)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)init;
- (id)supportedSizesForCatalog:(id)a0;
- (id)requestForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)cacheKeyForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (BOOL)wantsBackgroundImageDecompression;
- (struct CGSize { double x0; double x1; })_bestSizeForImageSizeInfo:(id)a0 catalog:(id)a1;
- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (id)_bestURLForCatalog:(id)a0 kind:(long long)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)sortedSupportedSizesForCatalog:(id)a0;

@end
