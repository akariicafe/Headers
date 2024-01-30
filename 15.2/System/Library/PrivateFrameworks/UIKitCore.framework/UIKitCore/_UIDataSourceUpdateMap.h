@class NSArray, _UIDataSourceSnapshotter, _UIDataSourceBatchUpdateMapHelper;

@interface _UIDataSourceUpdateMap : NSObject

@property (retain, nonatomic) _UIDataSourceSnapshotter *initialSnapshot;
@property (copy, nonatomic) NSArray *originalUpdateItems;
@property (retain, nonatomic) NSArray *updateItems;
@property (retain, nonatomic) NSArray *reverseUpdateItems;
@property (retain, nonatomic) _UIDataSourceSnapshotter *finalSnapshot;
@property (retain, nonatomic) _UIDataSourceBatchUpdateMapHelper *batchUpdateMapHelper;
@property (readonly, nonatomic) BOOL isBatchUpdateMap;

+ (id)mapForInitialSnapshot:(id)a0 finalSnapshot:(id)a1 batchUpdateItems:(id)a2;
+ (id)mapForInitialSnapshot:(id)a0 orderedUpdateItems:(id)a1;

- (id)updates;
- (void)_computeFinalSnapshotAndReverseUpdateItemsForCollectionViewUpdateItems:(id)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (id)finalIndexPathForIndexPath:(id)a0 startingAtUpdateWithIdentifier:(id)a1;
- (id)_updateMapByRevertingAllUpdatesExceptUpdateWithIdentifier:(id)a0;
- (id)initialIndexPathForIndexPath:(id)a0 beforeUpdateWithIdentifier:(id)a1;
- (long long)_transformSectionIndex:(long long)a0 applyingUpdateItem:(id)a1 withSnapshot:(id)a2;
- (id)_transformIndexPath:(id)a0 applyingUpdateItem:(id)a1 withSnapshot:(id)a2;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 updateItems:(id)a2;
- (id)description;
- (id)updateMapByRevertingUpdateWithIdentifier:(id)a0;
- (id)_mapUpdateForCollectionUpdateItem:(id)a0 snapshot:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isSectionOnlyIndexPath:(id)a0;
- (id)_sectionIndexPathForSection:(long long)a0;
- (void)_updateSnapshot:(id)a0 forUpdateItem:(id)a1;
- (id)submapAfterUpdate:(id)a0;
- (BOOL)_mapIsSimpleInsertMoveSequence;
- (id)finalUpdateForInitialUpdate:(id)a0;
- (id)initialUpdateForUpdateIdentifier:(id)a0;
- (id)_rebasedUpdatesForUpdate:(id)a0;
- (id)_findUpdateForIdentifier:(id)a0;
- (id)submapBeforeUpdate:(id)a0;
- (id)initialUpdateForFinalUpdate:(id)a0;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (id)rebasedMapFromNewBaseMap:(id)a0;
- (void)_performAppendingInsertsFixups;

@end
