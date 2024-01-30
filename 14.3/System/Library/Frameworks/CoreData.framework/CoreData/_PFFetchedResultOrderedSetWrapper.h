@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {
    int _cd_rc;
    NSArray *_underlyingArray;
    _PFWeakReference *_weakmoc;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)array;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)sortedArrayWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (BOOL)isEqualToOrderedSet:(id)a0;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)getObjects:(id *)a0;
- (BOOL)_isDeallocating;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)dealloc;
- (id)arrayFromObjectIDs;
- (BOOL)_tryRetain;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (unsigned long long)retainCount;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)description;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)count;
- (id)descriptionWithLocale:(id)a0;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfObject:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)allObjects;
- (id)initWithArray:(id)a0 andContext:(id)a1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (Class)classForCoder;
- (BOOL)containsObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
