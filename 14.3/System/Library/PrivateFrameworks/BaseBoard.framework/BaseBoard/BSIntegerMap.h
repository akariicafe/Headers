@class NSMapTable;

@interface BSIntegerMap : NSObject <NSCopying, NSMutableCopying> {
    NSMapTable *_mapTable;
    id _zeroIndexValue;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)objectForKey:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (BOOL)isEqual:(id)a0;
- (void)enumerateKeysWithBlock:(id /* block */)a0;
- (BOOL)containsObjectForKey:(long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;

@end
