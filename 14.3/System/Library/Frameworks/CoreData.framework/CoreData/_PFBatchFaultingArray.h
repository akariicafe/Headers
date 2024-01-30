@class NSManagedObjectContext, _PFArray, NSCachingFetchRequest;

@interface _PFBatchFaultingArray : NSArray {
    int _cd_rc;
    unsigned int _count;
    _PFArray *_array;
    unsigned int *_entryFlags;
    NSManagedObjectContext *_moc;
    NSCachingFetchRequest *_request;
    unsigned int _batchSize;
    unsigned int *_LRUBatches;
    struct _PFBatchFaultingArrayFlags { unsigned char _LRUIndex : 8; unsigned char _uniformEntity : 1; unsigned short _LRUEntryCount : 11; unsigned short _RESERVED : 12; } _flags;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (BOOL)isEqualToArray:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)sortedArrayWithOptions:(unsigned long long)a0 usingComparator:(id /* block */)a1;
- (id)objectsAtIndexes:(id)a0;
- (id)initWithPFArray:(id)a0 andRequest:(id)a1 andContext:(id)a2;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
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
- (id)valueForKey:(id)a0;
- (unsigned long long)retainCount;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)sortedArrayUsingFunction:(void /* function */ *)a0 context:(void *)a1;
- (unsigned long long)indexOfObjectAtIndexes:(id)a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)a0;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)subarrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)retain;
- (id)sortedArrayUsingFunction:(void /* function */ *)a0 context:(void *)a1 hint:(id)a2;
- (void)enumerateObjectsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)count;
- (id)newArrayFromObjectIDs;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)sortedArrayUsingDescriptors:(id)a0;
- (id)valueForKeyPath:(id)a0;
- (id)indexesOfObjectsWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (Class)classForCoder;
- (id)sortedArrayUsingSelector:(SEL)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)filteredArrayUsingPredicate:(id)a0;

@end
