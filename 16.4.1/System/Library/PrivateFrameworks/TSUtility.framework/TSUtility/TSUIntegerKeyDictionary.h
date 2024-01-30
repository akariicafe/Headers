@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct __CFDictionary { } *mDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setObject:(id)a0 forKey:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(long long)a0;
- (id)objectForKey:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)allValues;
- (id)init;
- (id)description;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
