@class HSHomeSharingLibrary;

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource

@property (retain, nonatomic) HSHomeSharingLibrary *library;

- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)cacheKeyForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)requestForCatalog:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldLookForLargerImageRepresentationsWhenBestRepresentationIsUnavailable;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (id)supportedSizesForCatalog:(id)a0;

@end
