@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_mapTable;
    id _zeroIndexValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsObjectForKey:(long long)a0;
- (id)objectForKey:(long long)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)allValues;
- (id)init;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (void)enumerateKeysWithBlock:(id /* block */)a0;

@end
