@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet {
    int _cd_rc;
    struct _NSFaultingMutableSetFlags { unsigned char _isFault : 1; unsigned char _mustPropagateDelete : 1; unsigned short _reserved : 14; unsigned short _relationship : 16; } _flags;
    id _realSet;
    NSManagedObject *_source;
}

@property (readonly, nonatomic) NSManagedObject *source;
@property (readonly, nonatomic) NSPropertyDescription *relationship;
@property (readonly, nonatomic, getter=isFault) BOOL fault;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (BOOL)isEqualToSet:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)intersectSet:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithSource:(id)a0 forRelationship:(id)a1 asFault:(BOOL)a2;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (oneway void)release;
- (void)getObjects:(id *)a0;
- (BOOL)_isDeallocating;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (void)dealloc;
- (BOOL)_tryRetain;
- (void)setSet:(id)a0;
- (void)willRead;
- (void)removeObject:(id)a0;
- (id)valueForKey:(id)a0;
- (unsigned long long)retainCount;
- (id)member:(id)a0;
- (void)unionSet:(id)a0;
- (id)anyObject;
- (BOOL)intersectsSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (void)addObjectsFromArray:(id)a0;
- (id)description;
- (id)retain;
- (BOOL)_isIdenticalFault:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)turnIntoFault;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)willReadWithContents:(id)a0;
- (id)allObjects;
- (id)valueForKeyPath:(id)a0;
- (Class)classForCoder;
- (BOOL)containsObject:(id)a0;
- (void)minusSet:(id)a0;
- (id)initWithSource:(id)a0 destinations:(id)a1 forRelationship:(id)a2 inContext:(id)a3;

@end
