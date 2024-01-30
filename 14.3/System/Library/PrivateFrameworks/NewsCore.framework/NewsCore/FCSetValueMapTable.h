@class NSMapTable;

@interface FCSetValueMapTable : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMapTable *backingMapTable;

- (id)keyEnumerator;
- (id)objectsForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)description;
- (void)addObjects:(id)a0 forKey:(id)a1;
- (id)_setForKey:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;

@end
