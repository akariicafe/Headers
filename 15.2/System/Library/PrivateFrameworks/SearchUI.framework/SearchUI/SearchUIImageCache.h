@class NSCache;

@interface SearchUIImageCache : NSObject

@property (retain) NSCache *imageCache;

+ (id)sharedCache;
+ (id)cachedTlkImageForSFImage:(id)a0;
+ (void)cacheTLKImage:(id)a0 forSFImage:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)dateDidChange;
- (void)appIconImageDidChange:(id)a0;
- (void)clearCacheAndPostNotificationForChangedIconForBundleIdentifier:(id)a0;

@end
