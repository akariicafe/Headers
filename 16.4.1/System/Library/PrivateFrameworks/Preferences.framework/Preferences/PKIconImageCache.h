@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKIconImageCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (retain, nonatomic) NSDictionary *iconCache;

+ (id)settingsIconCacheWithScale:(double)a0;
+ (id)settingsIconCache;

- (id)initWithPath:(id)a0 scale:(double)a1;
- (id)allImageIconKeys;
- (id)imageForKey:(id)a0;
- (void).cxx_destruct;

@end
