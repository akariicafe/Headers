@class NSMapTable, NSRecursiveLock;

@interface PXLRUMemoryCache : NSObject {
    NSMapTable *_cacheDictionary;
    NSRecursiveLock *_recursiveLock;
    struct _PXLRUMemoryCacheList { unsigned long long x0; struct _PXLRUMemoryCacheListElement *x1; struct _PXLRUMemoryCacheListElement *x2; } *_leastRecentUsedList;
    NSMapTable *_leastRecentUsedDictionary;
}

@property (nonatomic) unsigned long long numberOfSlots;
@property (readonly, nonatomic) unsigned long long currentUsedSlots;

- (void)removeObjectForKey:(id)a0;
- (void)_removeListElement:(struct _PXLRUMemoryCacheListElement { id x0; struct _PXLRUMemoryCacheListElement *x1; struct _PXLRUMemoryCacheListElement *x2; } *)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_promoteListElement:(struct _PXLRUMemoryCacheListElement { id x0; struct _PXLRUMemoryCacheListElement *x1; struct _PXLRUMemoryCacheListElement *x2; } *)a0;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)init;
- (void)evictSlots:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (id)objectForKeyedSubscript:(id)a0;

@end
