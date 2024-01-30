@class NSString;

@interface SSUpdatableAssetCacheManager : NSObject {
    NSString *_clientIdentifier;
}

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (id)manifestsDirectoryURL;
- (id)currentManifestFileURL;
- (id)assetsDirectoryURL;
- (BOOL)setCacheURLsOnManifestAndAssets:(id)a0 error:(id *)a1;
- (id)assetFileName:(id)a0;
- (id)manifestFileName:(id)a0;
- (id)manifestFileURL:(id)a0;
- (id)validatePath:(id)a0;
- (id)assetFileURL:(id)a0;
- (id)allCachedManifests;
- (id)loadCurrentCachedManifest;
- (id)cacheRoot;

@end
