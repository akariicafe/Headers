@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBAutocreatedDictionary : NSMutableDictionary {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (id)objectForKeyedSubscript:(id)a0;

@end
