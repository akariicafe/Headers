@class NSCache, NSString, MPArtworkResizeUtility;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource>

@property (retain, nonatomic) NSCache *fallbackCache;
@property (retain, nonatomic) MPArtworkResizeUtility *artworkResizeUtility;
@property (nonatomic) BOOL usesFallbackCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)_resizeArtwork:(id)a0 forCatalog:(id)a1 toSize:(struct CGSize { double x0; double x1; })a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)_resizeOriginalArtworkForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)_cachedRepresentationForCatalog:(id)a0;
- (void)loadArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2 systemEffectHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)_cacheRepresentation:(id)a0 forCatalog:(id)a1;
- (BOOL)_isRepresentation:(id)a0 validForCatalog:(id)a1;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)existingArtworkEffectResultForEffectType:(long long)a0 catalog:(id)a1 options:(id)a2;
- (BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)a0;
- (id)_representationAtSize:(struct CGSize { double x0; double x1; })a0 forCatalog:(id)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (BOOL)_isRepresentationSize:(struct CGSize { double x0; double x1; })a0 validForFittingSize:(struct CGSize { double x0; double x1; })a1;
- (id)_existingRepresentationForArtworkCatalog:(id)a0 fromCacheOnly:(BOOL)a1;
- (void)getExportableArtworkPropertiesForCatalog:(id)a0 completionHandler:(id /* block */)a1;

@end
