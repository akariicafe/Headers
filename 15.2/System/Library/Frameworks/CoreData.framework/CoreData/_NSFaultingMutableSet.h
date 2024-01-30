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

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)objectEnumerator;
- (id)valueForKey:(id)a0;
- (void)setSet:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeAllObjects;
- (BOOL)_isIdenticalFault:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)_shouldProcessKVOChange;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allObjects;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)addObjectsFromArray:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)minusSet:(id)a0;
- (id)description;
- (void)willReadWithContents:(id)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)intersectSet:(id)a0;
- (BOOL)isEqualToSet:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)_isDeallocating;
- (void)turnIntoFault;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithSource:(id)a0 forRelationship:(id)a1 asFault:(BOOL)a2;
- (void)willRead;
- (Class)classForCoder;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (void)makeObjectsPerformSelector:(SEL)a0 withObject:(id)a1;
- (id)initWithSource:(id)a0 destinations:(id)a1 forRelationship:(id)a2 inContext:(id)a3;
- (unsigned long long)count;
- (void)getObjects:(id *)a0;
- (id)anyObject;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (void)unionSet:(id)a0;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)member:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (BOOL)intersectsSet:(id)a0;

@end
