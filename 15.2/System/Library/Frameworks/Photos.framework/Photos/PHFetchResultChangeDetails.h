@class NSIndexSet, PHFetchResult, NSArray;

@interface PHFetchResultChangeDetails : NSObject {
    PHFetchResult *_fetchResultBeforeChanges;
    PHFetchResult *_fetchResultAfterChanges;
    NSArray *_previousObjects;
    NSArray *_currentObjects;
    NSIndexSet *_removedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_movedIndexes;
    struct __CFArray { } *_movedFromIndexes;
    NSArray *_changedIdentifiers;
    NSIndexSet *_changedIndexes;
    BOOL _skipIncrementalChanges;
}

@property (readonly, nonatomic) NSIndexSet *movedIndexes;
@property (readonly, nonatomic) const struct __CFArray { } *movedFromIndexes;
@property (readonly, nonatomic) BOOL hasAnyChanges;
@property (readonly) PHFetchResult *fetchResultBeforeChanges;
@property (readonly) PHFetchResult *fetchResultAfterChanges;
@property (readonly) BOOL hasIncrementalChanges;
@property (readonly) NSIndexSet *removedIndexes;
@property (readonly) NSArray *removedObjects;
@property (readonly) NSIndexSet *insertedIndexes;
@property (readonly) NSArray *insertedObjects;
@property (readonly) NSIndexSet *changedIndexes;
@property (readonly) NSArray *changedObjects;
@property (readonly) BOOL hasMoves;

+ (id)changeDetailsFromFetchResult:(id)a0 toFetchResult:(id)a1 changedObjects:(id)a2;
+ (id)_identifiersForPHObjects:(id)a0;

- (BOOL)hasDiffs;
- (void)calculateDiffs;
- (BOOL)shouldReload;
- (void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long *)a0 updatedCount:(unsigned long long *)a1 deletedCount:(unsigned long long *)a2;
- (id)description;
- (void).cxx_destruct;
- (id)_addAdditionalIndexesToChanges:(id)a0 withPreviousIdentifiers:(id)a1 currentIdentifiers:(id)a2;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (id)initWithFetchResult:(id)a0 currentFetchResult:(id)a1 changedIdentifiers:(id)a2 unknownMergeEvent:(BOOL)a3;
- (id)initWithManualFetchResultAfterChanges:(id)a0;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (void)dealloc;

@end
