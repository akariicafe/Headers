@class NSMutableArray, NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableArray : NSMutableArray {
    int _cd_rc;
    NSMutableArray *_realArray;
    NSManagedObject *_source;
    NSPropertyDescription *_relationship;
    struct _NSFaultingMutableArrayFlags { unsigned char _isFault : 1; unsigned int _reserved : 31; } _flags;
}

@property (readonly, nonatomic) NSManagedObject *source;
@property (readonly, nonatomic) NSPropertyDescription *relationship;
@property (readonly, nonatomic, getter=isFault) BOOL fault;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectEnumerator;
- (id)valueForKey:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (unsigned long long)retainCount;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeLastObject;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)description;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (void)turnIntoFault;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithSource:(id)a0 forRelationship:(id)a1 asFault:(BOOL)a2;
- (void)willRead;
- (Class)classForCoder;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)getObjects:(id *)a0;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)dealloc;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (BOOL)_tryRetain;
- (oneway void)release;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)valueForKeyPath:(id)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
