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
    NSArray *_changedOIDs;
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

+ (id)_identifiersForPHObjects:(id)a0;
+ (id)changeDetailsFromFetchResult:(id)a0 toFetchResult:(id)a1 changedObjects:(id)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFetchResult:(id)a0 currentFetchResult:(id)a1 changedOIDs:(id)a2 unknownMergeEvent:(BOOL)a3;
- (BOOL)hasDiffs;
- (void)enumerateMovesWithBlock:(id /* block */)a0;
- (id)description;
- (BOOL)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)a0;
- (id)initWithManualFetchResultAfterChanges:(id)a0;
- (void)calculateDiffs;
- (void)calculateDiffsAndAccumulateInsertedCount:(unsigned long long *)a0 updatedCount:(unsigned long long *)a1 deletedCount:(unsigned long long *)a2;

@end
