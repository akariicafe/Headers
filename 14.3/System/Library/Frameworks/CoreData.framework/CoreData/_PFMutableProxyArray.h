@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {
    int _cd_rc;
    unsigned int _editCount;
    unsigned int _offset;
    unsigned int _limit;
    _PFArray *_originalArray;
    NSMutableArray *_updatedObjectsArray;
    struct __CFArray { } *_indicesVeneer;
}

+ (Class)classForKeyedUnarchiver;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (id)mutableCopy;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)arrayFromObjectIDs;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)retain;
- (void)finalize;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPFArray:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithPFArray:(id)a0;
- (Class)classForCoder;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;

@end
