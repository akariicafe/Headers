@class NSMutableOrderedSet;

@interface UISLRUCache : NSObject {
    NSMutableOrderedSet *_cache;
    unsigned long long _limit;
}

- (id)initWithLimit:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)evictedObjectForUsedObject:(id)a0;

@end
