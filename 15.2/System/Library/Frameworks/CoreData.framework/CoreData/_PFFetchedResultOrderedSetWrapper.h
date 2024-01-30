@class NSString, NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet <PFObjectIDCollection> {
    int _cd_rc;
    NSArray *_underlyingArray;
    _PFWeakReference *_weakmoc;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)arrayFromObjectIDs;
- (id)objectEnumerator;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)newArrayFromObjectIDs;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)sortedArrayWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (unsigned long long)retainCount;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)allObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (BOOL)isEqualToOrderedSet:(id)a0;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (Class)classForCoder;
- (id)initWithArray:(id)a0 andContext:(id)a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)array;
- (id)indexesOfObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)getObjects:(id *)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (void)dealloc;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)indexOfObject:(id)a0;

@end
