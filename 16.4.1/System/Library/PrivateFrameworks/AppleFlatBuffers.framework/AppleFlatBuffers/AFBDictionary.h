@class AFBBufRef;

@interface AFBDictionary : NSDictionary {
    AFBBufRef *_bufRef;
    unsigned long long _count;
    Class _keyClass;
    id /* block */ _keyAtIndex;
    id /* block */ _tableAtIndex;
    id /* block */ _objectForValidKey;
}

- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)allKeysForObject:(id)a0;
- (id)allValues;
- (id)init;
- (id)allKeys;
- (void).cxx_destruct;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)initWithBufRef:(id)a0 count:(unsigned long long)a1 keyClass:(Class)a2 keyAtIndex:(id /* block */)a3 tableAtIndex:(id /* block */)a4 objectForValidKey:(id /* block */)a5;

@end
