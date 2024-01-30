@class NSMutableArray, NSMutableDictionary;

@interface EFMutableIndexMap : NSObject

@property (retain, nonatomic) NSMutableArray *tuples;
@property (retain, nonatomic) NSMutableDictionary *keyToTuple;
@property (readonly, nonatomic) unsigned long long count;

- (long long)keyAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)description;
- (void)enumerateKeysIndexesAndObjectsUsingBlock:(id /* block */)a0;
- (void)addKey:(long long)a0 atIndex:(unsigned long long)a1 object:(id)a2;
- (id)_tupleForKey:(long long)a0;
- (void)addKey:(long long)a0 atIndex:(unsigned long long)a1;
- (BOOL)removeKeyAtIndex:(unsigned long long)a0;
- (void)removeAllKeys;
- (BOOL)hasKeyAtIndex:(unsigned long long)a0;
- (void)enumerateKeysAndIndexesUsingBlock:(id /* block */)a0;
- (unsigned long long)indexOfKey:(long long)a0;
- (id)objectForInt64Key:(long long)a0;
- (void)shiftKeysStartingAtIndex:(unsigned long long)a0 by:(long long)a1;

@end
