@class NSObject, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface JFXLRUCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSMutableOrderedSet *keys;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic) unsigned long long capacity;
@property (readonly) unsigned long long count;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)JT_markRecentlyUsed:(id)a0;
- (BOOL)JT_removeLeastRecentlyUsedIfAtCapacity;
- (void)highMemoryWarning;

@end
