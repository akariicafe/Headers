@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)valueForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)objectAtIndex:(long long)a0;
- (void)removeAllObjects;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)description;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)dictionary;
- (id)copy;
- (void)dealloc;
- (void)_setupFrom:(id)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;
- (void)applyBlock:(id /* block */)a0;

@end
