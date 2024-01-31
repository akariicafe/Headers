@class CNCache;

@interface CNAvatarPosterCarouselFingerprintCache : NSObject

@property (readonly, nonatomic) CNCache *cache;

+ (id)cacheKeyForContact:(id)a0;
+ (id)cacheWithCapacity:(unsigned long long)a0 resourceScheduler:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCache:(id)a0;
- (id)fingerprintForKey:(id)a0;
- (void)removeObjectForContact:(id)a0;
- (void)setFingerprint:(id)a0 forKey:(id)a1;

@end
