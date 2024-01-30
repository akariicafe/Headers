@class GPBMessage, NSMutableDictionary;

@interface GPBAutocreatedDictionary : NSMutableDictionary {
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)keyEnumerator;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;

@end
