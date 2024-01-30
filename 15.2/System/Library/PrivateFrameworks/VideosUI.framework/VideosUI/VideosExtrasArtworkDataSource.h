@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)init;
- (id)supportedSizesForCatalog:(id)a0;
- (BOOL)wantsBackgroundImageDecompression;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
