@class NSArray, NSIndexSet, _NSOrderedCollectionDifferenceMoves;

@interface NSOrderedCollectionDifference : NSObject <NSFastEnumeration> {
    NSIndexSet *_insertIndexes;
    NSArray *_insertObjects;
    NSIndexSet *_removeIndexes;
    NSArray *_removeObjects;
    _NSOrderedCollectionDifferenceMoves *_moves;
}

@property (readonly) NSArray *insertions;
@property (readonly) NSArray *removals;
@property (readonly) BOOL hasChanges;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_enumerateChangesInDiffOrderWithBlock:(id /* block */)a0;
- (id)init;
- (id)initWithChanges:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)invertedDifference;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithInsertIndexes:(id)a0 insertedObjects:(id)a1 removeIndexes:(id)a2 removedObjects:(id)a3 additionalChanges:(id)a4;
- (id)inverseDifference;
- (id)initWithInsertIndexes:(id)a0 insertedObjects:(id)a1 removeIndexes:(id)a2 removedObjects:(id)a3;
- (id)differenceByTransformingChangesWithBlock:(id /* block */)a0;
- (id)debugDescription;
- (id)_changeWithType:(long long)a0 index:(unsigned long long)a1 object:(id)a2;

@end
