@class NSArray, NSString, NSMutableDictionary, NSLock;

@interface VNRPNTrackerEspressoModelCacheManager : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

@property (class, readonly) NSArray *cacheOptionsKeys;
@property (class, readonly, copy) VNRPNTrackerEspressoModelCacheManager *rpnInitEspressoResourcesCacheManager;
@property (class, readonly, copy) VNRPNTrackerEspressoModelCacheManager *rpnTrackEspressoResourcesCacheManager;

@property (readonly) NSString *espressoModelName;

+ (id)cacheKeyFromOptions:(id)a0 error:(id *)a1;

- (void)releaseCachedResources;
- (void).cxx_destruct;
- (id)initWithRPNEspressoModelName:(id)a0;
- (id)espressoResourcesFromOptions:(id)a0 error:(id *)a1;

@end
