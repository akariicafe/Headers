@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

+ (id)dictionary;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)incrementValueBy:(long long)a0 forKey:(long long)a1;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (id)allValues;
- (id)init;
- (id)description;
- (id)allKeys;
- (BOOL)containsKey:(long long)a0;
- (long long)intForKey:(long long)a0;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;
- (void)incrementValueForKey:(long long)a0;
- (void)addIntToIntDictionary:(id)a0;

@end
