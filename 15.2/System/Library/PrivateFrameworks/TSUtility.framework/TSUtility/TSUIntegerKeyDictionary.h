@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct __CFDictionary { } *mDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)removeObjectForKey:(long long)a0;
- (void)removeAllObjects;
- (id)allValues;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)keyEnumerator;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
