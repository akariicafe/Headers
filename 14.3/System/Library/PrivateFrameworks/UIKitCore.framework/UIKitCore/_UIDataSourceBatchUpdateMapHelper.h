@class NSArray, _UIDataSourceSnapshotter, NSMutableIndexSet;

@interface _UIDataSourceBatchUpdateMapHelper : NSObject {
    _UIDataSourceSnapshotter *_initialSnapshot;
    _UIDataSourceSnapshotter *_finalSnapshot;
    NSArray *_updateItems;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
}

- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (void).cxx_destruct;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (void)dealloc;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 updates:(id)a2;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (void)_computeSectionUpdates;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (id)description;
- (void)_computeItemUpdates;
- (id)initialIndexPathForFinalIndexPath:(id)a0;

@end
