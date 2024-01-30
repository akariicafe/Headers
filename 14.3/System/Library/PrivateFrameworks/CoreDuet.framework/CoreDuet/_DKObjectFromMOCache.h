@class NSMutableDictionary;

@interface _DKObjectFromMOCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_cacheEntries;
    NSMutableDictionary *_cacheHits;
    NSMutableDictionary *_cacheMisses;
}

- (id)init;
- (void).cxx_destruct;

@end
