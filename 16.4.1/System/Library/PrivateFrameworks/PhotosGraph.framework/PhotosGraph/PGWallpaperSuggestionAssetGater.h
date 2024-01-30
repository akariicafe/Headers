@class VCPMediaAnalysisService, NSObject;
@protocol PFParallaxLayoutConfiguration, OS_os_log;

@interface PGWallpaperSuggestionAssetGater : NSObject {
    unsigned long long _type;
    VCPMediaAnalysisService *_mediaAnalysisService;
    id<PFParallaxLayoutConfiguration> _deviceWallpaperLayoutConfiguration;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (class, readonly) unsigned long long currentWallpaperPropertiesVersion;

@property (nonatomic) BOOL isUserInitiated;
@property (nonatomic) BOOL coversTracks;

+ (id)assetFetchPropertySetsForGating;
+ (unsigned long long)_parallaxClassificationFromAssetGaterType:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)_gateAsset:(id)a0 wallpaperProperties:(id *)a1;
- (id)initWithType:(unsigned long long)a0 loggingConnection:(id)a1;
- (BOOL)_gateAsset:(id)a0 passesFaceQuality:(BOOL *)a1 hasPetFace:(BOOL *)a2;
- (BOOL)_hasPetFaceWithWallpaperProperties:(id)a0;
- (BOOL)_passesFaceQualityWithWallpaperProperties:(id)a0;
- (id)_requestWallpaperPropertiesForAsset:(id)a0 error:(id *)a1;
- (BOOL)asset:(id)a0 passesGatingWithWallpaperProperties:(id)a1;
- (BOOL)cacheExistsForAsset:(id)a0;
- (void)clearCacheOfAsset:(id)a0;
- (id)existingWallpaperPropertiesWithAsset:(id)a0;
- (BOOL)gateAsset:(id)a0;
- (BOOL)gateAsset:(id)a0 hasPetFace:(BOOL *)a1;
- (BOOL)gateAsset:(id)a0 passesFaceQuality:(BOOL *)a1;
- (BOOL)persistWallpaperProperties:(id)a0 ofAsset:(id)a1 error:(id *)a2;
- (id)requestAndPersistWallpaperPropertiesForAsset:(id)a0;
- (id)requestWallpaperPropertiesForAsset:(id)a0 error:(id *)a1;
- (id)wallpaperPropertiesFromAnalysisResults:(id)a0 andAsset:(id)a1;

@end
