@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NMSPodcastSizeCache : NSObject {
    NSDictionary *_episodeSizeInfoDict;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) NSDictionary *relationshipDict;
@property (readonly, nonatomic) NSDictionary *episodeSizeInfoDict;

+ (id)_podcastSizeCacheFilePath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithCache:(BOOL)a0;
- (void)_setupFromCache;
- (id)_cachedPodcastEpisodeSizeDictionary;
- (void)_registerForCacheChanged;
- (id)itemsForFeedURL:(id)a0;

@end
