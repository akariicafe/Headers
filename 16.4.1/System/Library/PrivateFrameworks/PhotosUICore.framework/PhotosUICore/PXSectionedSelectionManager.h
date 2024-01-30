@class PXSectionedDataSourceManager, NSString, PXAssetSelectionTypeCounter, PXSelectionSnapshot, PXSectionedDataSource, NSOrderedSet, PXMutableIndexPathSet;
@protocol PXSectionedSelectionManagerSnapshotValidator;

@interface PXSectionedSelectionManager : PXObservable <_PUOneUpSelectionIndicatorCompatibleManager, PXSectionedDataSourceManagerObserver> {
    struct { BOOL selectionSnapshot; } _needsUpdateFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (retain, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource;
@property (retain, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *selectedIndexPaths;
@property (nonatomic, setter=_setCursorIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } cursorIndexPath;
@property (nonatomic, setter=_setPendingIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } pendingIndexPath;
@property (nonatomic, setter=_setPressedIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } pressedIndexPath;
@property (nonatomic, setter=_setSelectionLimitReached:) BOOL selectionLimitReached;
@property (nonatomic, setter=_setEmptySelectionAvoided:) BOOL emptySelectionAvoided;
@property (retain, nonatomic, setter=_setOverallSelectionOrder:) NSOrderedSet *overallSelectionOrder;
@property (weak, nonatomic) id<PXSectionedSelectionManagerSnapshotValidator> snapshotValidator;
@property (nonatomic) BOOL disableAssetTypeCounting;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pu_isAssetReferenceSelected:(id)a0;
- (void)pu_registerSelectionIndicatorObserver:(id)a0;
- (void)pu_unregisterSelectionIndicatorObserver:(id)a0;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)_invalidateSelectionSnapshot;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)deselectAll;
- (void)setSelectionLimitReached:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (id)initWithDataSourceManager:(id)a0;
- (id)mutableChangeObject;
- (id)init;
- (void).cxx_destruct;
- (void)setSelectedIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)selectAllItems;
- (void)setSelectedIndexPaths:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_extendSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 toIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 inDirection:(unsigned long long)a2 withDelegate:(id)a3;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_initialItemIndexPathForMoveInDirection:(unsigned long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_initialSectionIndexPathForMoveInDirection:(unsigned long long)a0;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(id /* block */)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_moveItemSelectionInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_moveSectionSelectionInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_moveSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1 withDelegate:(id)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_selectInitialItemForMoveInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_selectInitialSectionForMoveInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (void)_setDataSource:(id)a0 withChangeHistory:(id)a1;
- (id)_validatedSnapshotForSnapshot:(id)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })extendSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1 withDelegate:(id)a2;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })extendSelectionToItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })moveSelectionInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (void)selectAllItemsInSection:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)a0;
- (void)setCursorIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setOverallSelectionOrder:(id)a0;
- (void)setPendingIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setPressedIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setSelectedState:(BOOL)a0 forIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)setSelectedState:(BOOL)a0 forIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 andUpdateCursorIndexPath:(BOOL)a2;
- (void)setSelectedState:(BOOL)a0 forIndexPathSet:(id)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })startingIndexPathForMoveInDirection:(unsigned long long)a0;

@end
