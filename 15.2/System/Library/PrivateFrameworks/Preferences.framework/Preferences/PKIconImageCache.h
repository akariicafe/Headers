@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKIconImageCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (retain, nonatomic) NSDictionary *iconCache;

+ (id)settingsIconCache;
+ (id)settingsIconCacheWithScale:(double)a0;

- (id)initWithPath:(id)a0 scale:(double)a1;
- (id)allImageIconKeys;
- (void).cxx_destruct;
- (id)imageForKey:(id)a0;

@end
