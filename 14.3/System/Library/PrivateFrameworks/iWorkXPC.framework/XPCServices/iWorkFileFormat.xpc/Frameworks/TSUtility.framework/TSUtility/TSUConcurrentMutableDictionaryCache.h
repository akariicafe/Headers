@class NSString, TSUReadWriteQueue, NSMutableDictionary;

@interface TSUConcurrentMutableDictionaryCache : NSObject {
    NSMutableDictionary *_cache;
    NSString *_name;
}

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;
@property (readonly, nonatomic) unsigned long long count;

- (id)objectForKey:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (void)removeAllObjects;
- (id)initWithName:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)p_didReceiveMemoryWarning:(id)a0;
- (void)p_didEnterBackground:(id)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;
- (void)performSyncWriteWithUnderlyingDictionary:(id /* block */)a0;

@end
