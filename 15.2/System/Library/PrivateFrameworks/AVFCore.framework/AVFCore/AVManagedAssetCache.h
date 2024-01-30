@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)a0;
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;

- (long long)currentSize;
- (id)initWithURL:(id)a0;
- (void)setMaxSize:(long long)a0;
- (long long)maxSize;
- (long long)maxEntrySize;
- (BOOL)isPlayableOffline;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (id)initWithURL:(id)a0 enableCRABSCache:(BOOL)a1 enableHLSCache:(BOOL)a2;
- (void)setMaxEntrySize:(long long)a0;
- (id)allKeys;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (BOOL)isHTTPLiveStreamingCacheEnabled;
- (id)URL;
- (void)dealloc;

@end
