@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (id)keyEnumerator;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)allKeys;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (BOOL)containsKey:(long long)a0;
- (long long)intForKey:(long long)a0;
- (struct __CFDictionary { } *)p_cfDictionary;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (void)removeIntForKey:(long long)a0;
- (void)removeAllInts;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;

@end
