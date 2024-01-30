@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)objectForKey:(long long)a0;
- (id)keyEnumerator;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(long long)a0;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
