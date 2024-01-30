@class NSString, NSCache;

@interface NMSRecommendationArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCache *_fallbackCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;
+ (id)artworkCacheDirectory;

- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (id)_cachedRepresentationForCatalog:(id)a0;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void).cxx_destruct;
- (id)_existingRepresentationForArtworkCatalog:(id)a0 fromCacheOnly:(BOOL)a1;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)init;
- (void)_cacheRepresentation:(id)a0 forCatalog:(id)a1;
- (id)_cachedArtworkImageWithToken:(id)a0;
- (BOOL)artworkCacheExistsForToken:(id)a0;

@end
