@interface _NSMoribundCache : NSCache

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)retain;
- (id)delegate;
- (void)removeObjectForKey:(id)a0;
- (oneway void)release;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDelegate:(id)a0;
- (void)removeAllObjects;
- (void)dealloc;
- (id)copy;
- (void)setName:(id)a0;
- (id)autorelease;
- (id)name;
- (unsigned long long)retainCount;
- (void)setCountLimit:(unsigned long long)a0;
- (unsigned long long)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)setTotalCostLimit:(unsigned long long)a0;
- (unsigned long long)totalCostLimit;

@end
