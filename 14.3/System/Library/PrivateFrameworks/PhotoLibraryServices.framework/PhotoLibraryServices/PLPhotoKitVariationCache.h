@class NSURL, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface PLPhotoKitVariationCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCache *_memoryCache;
}

@property (readonly) NSURL *cacheURL;

- (id)initWithPathManager:(id)a0;
- (unsigned long long)purgeAll;
- (void).cxx_destruct;
- (id)gatingResultForVariationType:(long long)a0 assetIdentifier:(id)a1;
- (id)initWithCacheURL:(id)a0;
- (void)saveAnalysisResult:(id)a0 assetIdentifier:(id)a1;
- (void)saveAnalysisResult:(id)a0 assetIdentifier:(id)a1 sourceType:(long long)a2;
- (id)analysisResultForAssetIdentifier:(id)a0;
- (id)analysisResultForAssetIdentifier:(id)a0 sourceType:(long long)a1;
- (BOOL)deleteCacheForAssetIdentifier:(id)a0;
- (void)savePortraitEffectSettings:(id)a0 sourceType:(long long)a1 assetIdentifier:(id)a2;
- (void)savePortraitEffectSettings:(id)a0 assetIdentifier:(id)a1;
- (id)portraitEffectSettingsForAssetIdentifier:(id)a0 sourceType:(long long)a1;
- (id)portraitEffectSettingsForAssetIdentifier:(id)a0;
- (void)saveGatingResult:(id)a0 forVariationType:(long long)a1 assetIdentifier:(id)a2 sourceType:(long long)a3;
- (void)saveGatingResult:(id)a0 forVariationType:(long long)a1 assetIdentifier:(id)a2;
- (id)gatingResultForVariationType:(long long)a0 assetIdentifier:(id)a1 sourceType:(long long)a2;
- (unsigned long long)evictIfNeeded;
- (BOOL)_performChangesForAssetIdentifier:(id)a0 sourceType:(long long)a1 changesBlock:(id /* block */)a2;
- (BOOL)deleteCacheForAssetIdentifier:(id)a0 sourceType:(long long)a1;
- (id)_fileURLWithIdentifier:(id)a0 sourceType:(long long)a1 pathExtension:(id)a2;
- (BOOL)_writeInfo:(id)a0 atURL:(id)a1;
- (id)_readInfoForURL:(id)a0;
- (void)_saveToMemoryCache:(id)a0 forFileURL:(id)a1 fileSize:(unsigned long long)a2;
- (BOOL)_removeCachesForURL:(id)a0;

@end
