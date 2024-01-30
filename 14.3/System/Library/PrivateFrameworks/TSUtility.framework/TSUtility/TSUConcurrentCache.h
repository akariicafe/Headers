@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;

- (id)objectForKey:(id)a0;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)unload;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithName:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;
- (BOOL)hasFlushableContent;

@end
