@class NSHashTable;

@interface BSIntegerSet : NSObject <NSCopying, NSMutableCopying> {
    NSHashTable *_hashTable;
    BOOL _hasZeroValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsValue:(long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
