@class NSMutableDictionary;

@interface FCSetValueDictionary : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSMutableDictionary *backingDictionary;

- (void)addObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_setForKey:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectsForKey:(id)a0;
- (void)addObjects:(id)a0 forKey:(id)a1;
- (id)objectsForKey:(id)a0;

@end
