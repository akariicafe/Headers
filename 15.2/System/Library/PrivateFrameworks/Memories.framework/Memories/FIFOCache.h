@class NSMutableDictionary, NSMutableArray;

@interface FIFOCache : NSObject {
    NSMutableDictionary *m_cache;
    NSMutableArray *m_FIFO;
    int m_capacity;
}

+ (void)noteApplicationDidReceiveMemoryWarning;

- (id)objectEnumerator;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)count;
- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (void)addObjectsFromDictionary:(id)a0;

@end
