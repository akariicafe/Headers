@interface VideosExtrasArtworkDataSource : MPAbstractNetworkArtworkDataSource

- (BOOL)wantsBackgroundImageDecompression;
- (id)supportedSizesForCatalog:(id)a0;
- (id)init;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
