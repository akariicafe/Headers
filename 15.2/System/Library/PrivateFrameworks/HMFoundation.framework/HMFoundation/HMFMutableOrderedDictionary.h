@class NSArray;

@interface HMFMutableOrderedDictionary : HMFOrderedDictionary <HMFMutableAssociativeCollection>

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setOrderedDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)initWithObjects:(id)a0 orderedKeySet:(id)a1;
- (id)initWithObjects:(id)a0 forKeys:(id)a1 copyObjects:(BOOL)a2 copyKeys:(BOOL)a3;
- (void)setBySortingDictionary:(id)a0 keyComparator:(id /* block */)a1;
- (void)setBySortingDictionary:(id)a0;

@end
