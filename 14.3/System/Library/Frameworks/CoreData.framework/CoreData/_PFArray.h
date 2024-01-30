@class _PFWeakReference;

@interface _PFArray : NSArray {
    int _cd_rc;
    unsigned int _count;
    id *_array;
    _PFWeakReference *_weakContext;
    struct _PFArrayFlags { unsigned char shouldRetain : 1; unsigned char shouldRelease : 1; unsigned char useExtendedRelease : 1; unsigned char freeBackingArray : 1; unsigned char copyBackingArray : 1; unsigned char managedObjects : 1; unsigned int _RESERVED : 27; } _flags;
}

+ (void)initialize;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)managedObjectIDAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)getObjects:(id *)a0;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)arrayFromObjectIDs;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjects:(id *)a0 count:(unsigned int)a1 andFlags:(unsigned int)a2;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)retain;
- (id)initWithObjects:(id *)a0 count:(unsigned int)a1 andFlags:(unsigned int)a2 andContext:(id)a3;
- (unsigned long long)count;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (id)objectAtIndex:(unsigned long long)a0;

@end
