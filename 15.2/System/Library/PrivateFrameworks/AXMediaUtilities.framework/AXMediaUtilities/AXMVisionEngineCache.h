@class NSMutableOrderedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AXMVisionEngineCache : NSObject {
    NSObject<OS_dispatch_queue> *_cacheQueue;
    long long _cacheQueue_maxItems;
    NSMutableOrderedSet *_cacheQueue_orderedKeys;
    NSMutableDictionary *_cacheQueue_results;
}

@property (readonly, nonatomic) long long cacheSize;

- (id)initWithCacheSize:(long long)a0;
- (id)description;
- (void)purgeCache;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setResult:(id)a0 forKey:(id)a1;
- (long long)_cacheQueue_cacheSize;
- (id)_cacheQueue_resultForKey:(id)a0;
- (void)_cacheQueue_setResult:(id)a0 forKey:(id)a1;
- (id)resultForKey:(id)a0;

@end
