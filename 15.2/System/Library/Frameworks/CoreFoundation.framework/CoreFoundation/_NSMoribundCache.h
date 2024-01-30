@interface _NSMoribundCache : NSCache

- (unsigned long long)countLimit;
- (unsigned long long)totalCostLimit;
- (void)setCountLimit:(unsigned long long)a0;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)retainCount;
- (void)setName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (void)setDelegate:(id)a0;
- (id)autorelease;
- (id)delegate;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)copy;
- (void)dealloc;
- (oneway void)release;

@end
