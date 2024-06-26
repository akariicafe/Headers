@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)orderedSetWithOrderedSet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 copyItems:(BOOL)a2;
+ (id)orderedSetWithArray:(id)a0;
+ (id)orderedSetWithObject:(id)a0;
+ (id)orderedSetWithArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 copyItems:(BOOL)a2;
+ (id)orderedSetWithSet:(id)a0;
+ (id)orderedSetWithOrderedSet:(id)a0;
+ (id)orderedSetWithOrderedSet:(id)a0 copyItems:(BOOL)a1;
+ (id)orderedSetWithObjects:(id)a0;
+ (id)orderedSetWithObjects:(const id *)a0 count:(unsigned long long)a1;
+ (id)orderedSetWithSet:(id)a0 copyItems:(BOOL)a1;
+ (id)orderedSetWithArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)newOrderedSetWithObjects:(const id *)a0 count:(unsigned long long)a1;
+ (id)orderedSetWithOrderedSet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)orderedSetWithArray:(id)a0 copyItems:(BOOL)a1;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)orderedSet;

- (id)sortedArrayUsingDescriptors:(id)a0;
- (id)differenceFromOrderedSet:(id)a0 withOptions:(unsigned long long)a1 usingEquivalenceTest:(id /* block */)a2;
- (id)valueForKey:(id)a0;
- (id)_mutableArrayValueForKeyPath:(id)a0 ofObjectAtIndex:(unsigned long long)a1;
- (BOOL)_validateValue:(inout id *)a0 forKeyPath:(id)a1 ofObjectAtIndex:(unsigned long long)a2 error:(out id *)a3;
- (id)_mutableOrderedSetValueForKeyPath:(id)a0 ofObjectAtIndex:(unsigned long long)a1;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)_mutableSetValueForKeyPath:(id)a0 ofObjectAtIndex:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)differenceFromOrderedSet:(id)a0 withOptions:(unsigned long long)a1;
- (void)_setValue:(id)a0 forKeyPath:(id)a1 ofObjectAtIndex:(unsigned long long)a2;
- (id)orderedSetByApplyingDifference:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)_valueForKeyPath:(id)a0 ofObjectAtIndex:(unsigned long long)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)filteredOrderedSetUsingPredicate:(id)a0;
- (id)differenceFromOrderedSet:(id)a0;
- (id)_sumForKeyPath:(id)a0;
- (id)_avgForKeyPath:(id)a0;
- (id)_maxForKeyPath:(id)a0;
- (id)_minForKeyPath:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)_countForKeyPath:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (id)firstObject;
- (id)set;
- (id)lastObject;
- (id)initWithArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 copyItems:(BOOL)a2;
- (unsigned long long)indexOfObject:(id)a0 inSortedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 options:(unsigned long long)a2 usingComparator:(id /* block */)a3;
- (id)initWithArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectPassingTest:(id /* block */)a0;
- (id)objectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)objectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (BOOL)intersectsOrderedSet:(id)a0;
- (BOOL)isSubsetOfOrderedSet:(id)a0;
- (unsigned long long)indexOfObjectPassingTest:(id /* block */)a0;
- (id)initWithOrderedSet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)indexesOfObjectsPassingTest:(id /* block */)a0;
- (id)initWithOrderedSet:(id)a0 copyItems:(BOOL)a1;
- (id)initWithOrderedSet:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 copyItems:(BOOL)a2;
- (BOOL)containsObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)countForObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)reverseObjectEnumerator;
- (id)reversedOrderedSet;
- (id)objectEnumerator;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithArray:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)sortedArrayWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (unsigned long long)countForObject:(id)a0;
- (id)descriptionWithLocale:(id)a0 indent:(unsigned long long)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)initWithObject:(id)a0;
- (BOOL)isEqualToOrderedSet:(id)a0;
- (BOOL)isNSOrderedSet__;
- (id)initWithSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0 copyItems:(BOOL)a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)array;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)getObjects:(id *)a0;
- (id)initWithOrderedSet:(id)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (id)objectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)initWithSet:(id)a0 copyItems:(BOOL)a1;
- (unsigned long long)hash;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (id)objectsPassingTest:(id /* block */)a0;
- (BOOL)intersectsSet:(id)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)sortedArrayFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingComparator:(id /* block */)a2;
- (unsigned long long)indexOfObject:(id)a0;

@end
