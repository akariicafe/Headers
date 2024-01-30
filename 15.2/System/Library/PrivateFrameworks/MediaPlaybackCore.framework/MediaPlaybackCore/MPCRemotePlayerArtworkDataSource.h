@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource

@property (class, readonly, nonatomic) MPCRemotePlayerArtworkDataSource *sharedDataSource;

+ (id)bestArtworkSizes;

- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)supportedSizesForCatalog:(id)a0;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)_urlForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
