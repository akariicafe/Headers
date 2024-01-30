@class NSString, NSManagedObject, NSMutableSet;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
    NSManagedObject *_container;
    NSString *_key;
    NSMutableSet *_mutableSet;
}

+ (Class)classForKeyedUnarchiver;

- (BOOL)isEqualToSet:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)intersectSet:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)getObjects:(id *)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (void)dealloc;
- (void)setSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)valueForKey:(id)a0;
- (id)member:(id)a0;
- (void)unionSet:(id)a0;
- (id)anyObject;
- (id)initWithContainer:(id)a0 key:(id)a1 mutableSet:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allObjects;
- (id)valueForKeyPath:(id)a0;
- (Class)classForCoder;
- (BOOL)containsObject:(id)a0;
- (void)minusSet:(id)a0;

@end
