@class NSCache, NSMutableDictionary, NSMutableSet;

@interface CKSearchThumbnailPreviewGenerator : NSObject

@property (retain, nonatomic) NSCache *thumbnailCache;
@property (retain, nonatomic) NSCache *livePhotoStatusCache;
@property (retain, nonatomic) NSCache *videoDurationCache;
@property (retain, nonatomic) NSCache *lpLinkMetadataCache;
@property (retain, nonatomic) NSCache *lpPassPropertiesMetadataCache;
@property (retain, nonatomic) NSMutableDictionary *mapHashesCache;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightGeneration;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLivePhotoStatus;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightVideoDurationCalculation;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLPLinkMetadataGeneration;
@property (retain, nonatomic) NSMutableSet *keysWithInFlightLPPassPropertiesMetadataGeneration;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (id)cachedLinkMetadataForQueryResult:(id)a0;
- (id)cachedPreviewForKey:(id)a0;
- (BOOL)hasCachedPreviewForQueryResult:(id)a0;
- (void)generatePreviewForQueryResult:(id)a0;
- (BOOL)hasCachedLinkMetadataForQueryResult:(id)a0;
- (void)beginFetchingLinkMetadataForQueryResult:(id)a0;
- (id)_previewURLForKey:(id)a0;
- (void)_persistPreview:(id)a0 atURL:(id)a1;
- (void)generateAndCacheIconWithURL:(id)a0 key:(id)a1 completion:(id /* block */)a2;
- (void)generateAndCacheThumbnailWithURL:(id)a0 request:(id)a1 key:(id)a2 completion:(id /* block */)a3;
- (id)cachedPreviewOrNullForKey:(id)a0;
- (BOOL)_checkResultForLivePhotoComplement:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_calculateDurationForVideoResult:(id)a0;
- (void)_asyncLoadCachedDiskPreviewForKeyIfAvailable:(id)a0 completion:(id /* block */)a1;
- (void)generateAndCachePassWithURL:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)_previewLoadQueue;
- (id)mapKeyForQueryResult:(id)a0 traitCollection:(id)a1;
- (BOOL)hasCachedPreviewForKey:(id)a0;
- (void)_generateMapThumbnailForKey:(id)a0 attributes:(id)a1 traitCollection:(id)a2 completion:(id /* block */)a3;
- (id)_lpPreviewLoadQueue;
- (void)_prewarmLinkMetadata:(id)a0;
- (id)_lpPassLinkPreviewLoadQueue;
- (BOOL)queryResultHasLivePhoto:(id)a0;
- (BOOL)queryResultIsVideo:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })durationForVideoResult:(id)a0;
- (void)generateMapPreviewForQueryResult:(id)a0 traitCollection:(id)a1;
- (id)mapPlaceholderImageForTraitCollection:(id)a0;
- (BOOL)hasCachedPassLinkPropertiesForQueryResult:(id)a0;
- (id)cachedPassLinkPropertiesForQueryResult:(id)a0;
- (void)beginGeneratingWebLinkPresentationPropertiesForQueryResult:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)cachedPreviewForQueryResult:(id)a0;
- (BOOL)hasCachedMapPreviewForQueryResult:(id)a0 traitCollection:(id)a1;
- (id)cachedMapPreviewForQueryResult:(id)a0 traitCollection:(id)a1;

@end
