@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)dictionary;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (id)objectAtIndex:(long long)a0;
- (id)allValues;
- (id)copy;
- (id)description;
- (id)allKeys;
- (void)_setupFrom:(id)a0;
- (void)applyBlock:(id /* block */)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
