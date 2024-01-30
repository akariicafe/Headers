@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache

@property (readonly, nonatomic) TSUReadWriteQueue *readWriteQueue;

- (void)unload;
- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (id)initWithName:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (void)removeObjectForKey:(id)a0 andWait:(BOOL)a1;
- (BOOL)hasFlushableContent;

@end
