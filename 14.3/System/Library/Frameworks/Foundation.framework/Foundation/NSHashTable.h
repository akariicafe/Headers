@class NSArray, NSSet, NSPointerFunctions;

@interface NSHashTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;
@property (readonly, nonatomic) id anyObject;
@property (readonly, copy) NSSet *setRepresentation;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)weakObjectsHashTable;
+ (id)alloc;
+ (id)hashTableWithWeakObjects;
+ (id)hashTableWithOptions:(unsigned long long)a0;

- (void)removeItem:(const void *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (unsigned long long)weakCount;
- (id)init;
- (id)mutableSet;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObject:(id)a0;
- (id)copy;
- (id)initWithOptions:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (id)member:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)unionHashTable:(id)a0;
- (void)minusHashTable:(id)a0;
- (BOOL)intersectsHashTable:(id)a0;
- (BOOL)isSubsetOfHashTable:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)description;
- (BOOL)isEqualToHashTable:(id)a0;
- (void)intersectHashTable:(id)a0;
- (void)removeAllItems;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void *)getItem:(const void *)a0;
- (void)insertKnownAbsentItem:(const void *)a0;
- (void)getKeys:(const void **)a0 count:(unsigned long long *)a1;
- (id)initWithPointerFunctions:(id)a0 capacity:(unsigned long long)a1;
- (Class)classForCoder;
- (BOOL)containsObject:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
