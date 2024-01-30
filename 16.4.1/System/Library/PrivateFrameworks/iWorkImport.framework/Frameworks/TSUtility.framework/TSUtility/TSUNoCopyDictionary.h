@interface TSUNoCopyDictionary : NSMutableDictionary {
    struct __CFDictionary { } *mDictionary;
}

+ (Class)classForKeyedUnarchiver;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)allValues;
- (id)init;
- (id)allKeys;
- (void)setObject:(id)a0 forUncopiedKey:(id)a1;
- (id)initWithCFDictionary:(struct __CFDictionary { } *)a0;

@end
