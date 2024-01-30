@interface AVAssetCache : NSObject

@property (readonly, nonatomic, getter=isPlayableOffline) BOOL playableOffline;

+ (id)assetCacheWithURL:(id)a0;
+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;

- (id)URL;
- (long long)maxSize;
- (long long)currentSize;
- (id)initWithURL:(id)a0;
- (id)allKeys;
- (id)_init;
- (long long)maxEntrySize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (void)removeEntryForKey:(id)a0;
- (long long)sizeOfEntryForKey:(id)a0;
- (id)lastModifiedDateOfEntryForKey:(id)a0;

@end
