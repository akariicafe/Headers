@class NSCache, _RMSNowPlayingArtworkCacheItem;

@interface TVRMSNowPlayingArtworkCache : NSObject {
    _RMSNowPlayingArtworkCacheItem *_lastItem;
    NSCache *_cache;
}

+ (id)sharedArtworkCache;

- (void).cxx_destruct;
- (id)init;
- (id)artworkDataForIdentifier:(id)a0;
- (void)setArtworkData:(id)a0 forIdentifier:(id)a1;
- (id)artworkDataForNowPlayingInfo:(id)a0;
- (void)setArtworkData:(id)a0 forNowPlayingInfo:(id)a1;

@end
