@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {
    unsigned long long _options;
    unsigned long long _count;
    const id *_keys;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)new;

- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)objectForKey:(id)a0;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)init;
- (id)mutableCopy;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)allKeys;
- (id)retain;
- (id)objectForKeyedSubscript:(id)a0;
- (unsigned long long)count;

@end
