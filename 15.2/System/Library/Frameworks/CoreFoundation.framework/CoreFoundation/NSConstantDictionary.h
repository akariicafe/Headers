@interface NSConstantDictionary : NSDictionary <NSFastEnumeration> {
    unsigned long long _options;
    unsigned long long _count;
    const id *_keys;
    const id *_objects;
}

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)objectEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)keysOfEntriesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)allValues;
- (id)allKeys;
- (unsigned long long)retainCount;
- (id)keyOfEntryWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)autorelease;
- (void)__apply:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)_isDeallocating;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copy;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)objectForKeyedSubscript:(id)a0;

@end
