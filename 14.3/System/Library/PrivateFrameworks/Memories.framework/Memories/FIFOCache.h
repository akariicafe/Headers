@class NSMutableDictionary, NSMutableArray;

@interface FIFOCache : NSObject {
    NSMutableDictionary *m_cache;
    NSMutableArray *m_FIFO;
    int m_capacity;
}

+ (void)noteApplicationDidReceiveMemoryWarning;

- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectEnumerator;
- (id)description;
- (long long)count;
- (void)removeAllObjects;
- (id)initWithCapacity:(int)a0;
- (void)removeObjectForKey:(id)a0;
- (void)addObjectsFromDictionary:(id)a0;

@end
