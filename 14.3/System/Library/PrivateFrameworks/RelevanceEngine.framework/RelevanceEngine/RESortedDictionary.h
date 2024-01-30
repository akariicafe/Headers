@class NSMutableDictionary, NSMutableArray;

@interface RESortedDictionary : NSObject <NSCopying> {
    NSMutableDictionary *_values;
    NSMutableArray *_order;
}

@property (readonly) unsigned long long count;

- (id)objectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeAllObjects;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;

@end
