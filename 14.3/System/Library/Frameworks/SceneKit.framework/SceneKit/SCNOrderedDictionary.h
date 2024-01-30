@class NSMutableArray, NSMutableDictionary;

@interface SCNOrderedDictionary : NSObject {
    NSMutableArray *_keys;
    NSMutableDictionary *_keyValues;
}

- (id)objectForKey:(id)a0;
- (id)keys;
- (id)dictionary;
- (void)dealloc;
- (id)valueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (id)allValues;
- (id)allKeys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectAtIndex:(long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)_setupFrom:(id)a0;
- (void)applyFunction:(void /* function */ *)a0 withContext:(void *)a1;

@end
