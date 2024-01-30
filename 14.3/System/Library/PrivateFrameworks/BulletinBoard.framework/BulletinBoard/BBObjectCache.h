@class NSHashTable;

@interface BBObjectCache : NSObject {
    NSHashTable *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (id)cacheObject:(id)a0;

@end
