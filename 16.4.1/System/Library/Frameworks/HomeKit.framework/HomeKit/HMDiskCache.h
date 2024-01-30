@class NSString;

@interface HMDiskCache : HMFObject <HMPersistentCache>

@property (readonly, copy) NSString *cachePath;

- (id)loadCachedObjectsForCacheWithName:(id)a0;
- (id)initWithCachePath:(id)a0;
- (BOOL)storeCachedObjects:(id)a0 forCacheName:(id)a1;
- (void).cxx_destruct;

@end
