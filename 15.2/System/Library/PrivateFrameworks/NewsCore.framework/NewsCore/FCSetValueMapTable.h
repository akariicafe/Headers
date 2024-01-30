@class FCMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) FCMapTable *backingMapTable;

- (id)objectEnumerator;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_setForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (void)removeObjectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;
- (id)objectsForKey:(id)a0;

@end
