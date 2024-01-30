@interface SCRCIndexMap : NSObject <NSCopying, NSSecureCoding> {
    struct __CFDictionary { } *_map;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (id)indexes;
- (id)_initWithIndexMap:(id)a0;
- (id)_initAndDeepCopyIndexMap:(id)a0;
- (id)initWithObjects:(const id *)a0 andIndexes:(unsigned long long *)a1 count:(unsigned long long)a2;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForIndex:(unsigned long long)a0;
- (void)addObjectsFromIndexMap:(id)a0;
- (id)description;
- (id)init;
- (id)objectForIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)dealloc;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (unsigned long long *)_createIndexesWithSize:(unsigned long long *)a0;

@end
