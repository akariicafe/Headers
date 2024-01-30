@interface _NSMoribundCache : NSCache

- (unsigned long long)countLimit;
- (unsigned long long)totalCostLimit;
- (void)setCountLimit:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (void)setName:(id)a0;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)retainCount;
- (id)copy;
- (id)retain;
- (id)name;
- (void)setDelegate:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)delegate;

@end
