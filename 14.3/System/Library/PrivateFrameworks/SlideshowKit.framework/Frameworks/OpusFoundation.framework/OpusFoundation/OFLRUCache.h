@class NSMutableDictionary, NSRecursiveLock;

@interface OFLRUCache : NSObject {
    NSMutableDictionary *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _OFLRUCacheList { unsigned long long x0; struct _OFLRUCacheListElement *x1; struct _OFLRUCacheListElement *x2; } *_leastRecentUsedList;
    NSMutableDictionary *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (readonly, nonatomic) unsigned long long currentUsedSlots;

- (void)evictSlots:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (BOOL)writeToURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)loadFromURL:(id)a0;
- (id)allKeys;
- (void)_promoteListElement:(struct _OFLRUCacheListElement { id x0; struct _OFLRUCacheListElement *x1; struct _OFLRUCacheListElement *x2; } *)a0;
- (void)removeAllObjects;
- (void)_removeListElement:(struct _OFLRUCacheListElement { id x0; struct _OFLRUCacheListElement *x1; struct _OFLRUCacheListElement *x2; } *)a0;
- (void)removeObjectForKey:(id)a0;

@end
