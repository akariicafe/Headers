@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)a0;
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;

- (void)setMaxSize:(long long)a0;
- (id)URL;
- (long long)maxSize;
- (void)dealloc;
- (long long)currentSize;
- (id)initWithURL:(id)a0;
- (id)allKeys;
- (long long)maxEntrySize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (BOOL)isPlayableOffline;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (void)setMaxEntrySize:(long long)a0;
- (id)initWithURL:(id)a0 enableCRABSCache:(BOOL)a1 enableHLSCache:(BOOL)a2;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (BOOL)isHTTPLiveStreamingCacheEnabled;

@end
