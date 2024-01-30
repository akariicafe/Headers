@class NSString, PXAssetSelectionTypeCounter, PXSelectionSnapshot, PXSectionedDataSource, PXSectionedDataSourceManager, PXMutableIndexPathSet;
@protocol PXSectionedSelectionManagerSnapshotValidator;

@interface PXSectionedSelectionManager : PXObservable <PXUIKeyCommandNamespace, PXSectionedDataSourceManagerObserver> {
    struct { BOOL selectionSnapshot; } _needsUpdateFlags;
}

@property (readonly, nonatomic) PXAssetSelectionTypeCounter *assetTypeCounter;
@property (readonly, nonatomic) NSString *namespaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic, setter=_setSelectionSnapshot:) PXSelectionSnapshot *selectionSnapshot;
@property (retain, nonatomic, setter=_setDataSource:) PXSectionedDataSource *dataSource;
@property (retain, nonatomic, setter=_setSelectedIndexPaths:) PXMutableIndexPathSet *selectedIndexPaths;
@property (nonatomic, setter=_setCursorIndexPath:) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } cursorIndexPath;
@property (nonatomic, setter=_setPendingIndexPath:) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } pendingIndexPath;
@property (nonatomic, setter=_setSelectionLimitReached:) BOOL selectionLimitReached;
@property (weak, nonatomic) id<PXSectionedSelectionManagerSnapshotValidator> snapshotValidator;
@property (nonatomic) BOOL disableAssetTypeCounting;
@property (readonly, nonatomic) PXSectionedDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateSelectionSnapshot;
- (id)init;
- (void).cxx_destruct;
- (void)setSelectedIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)didPerformChanges;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_performSelectAll;
- (long long)_performCommand:(long long)a0 withDelegate:(id)a1;
- (void)_performUnselectAll;
- (void)_performMoveInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (void)_performExtendInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (id)uiKeyCommandsWithDelegate:(id)a0;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })startingIndexPathForMoveInDirection:(unsigned long long)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_extendSelectionFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 toIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 inDirection:(unsigned long long)a2 withDelegate:(id)a3;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_moveSectionSelectionInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_moveItemSelectionInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_selectInitialSectionForMoveInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_moveSelectionFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1 withDelegate:(id)a2;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_selectInitialItemForMoveInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_initialSectionIndexPathForMoveInDirection:(unsigned long long)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })_initialItemIndexPathForMoveInDirection:(unsigned long long)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })extendSelectionToItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 withDelegate:(id)a1;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })extendSelectionFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 inDirection:(unsigned long long)a1 withDelegate:(id)a2;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })moveSelectionInDirection:(unsigned long long)a0 withDelegate:(id)a1;
- (id)initWithDataSourceManager:(id)a0;
- (void)selectNonCopiedAssetsWithImportStatusManager:(id)a0;
- (void)setSelectionLimitReached:(BOOL)a0;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (long long)performKeyCommand:(id)a0 withDelegate:(id)a1;
- (void)deselectAll;
- (void)_updateSelectionSnapshotIfNeeded;
- (void)_setDataSource:(id)a0 withChangeHistory:(id)a1;
- (void)_makeSimpleModificationToSelectedIndexPathsUsingBlock:(id /* block */)a0;
- (void)selectAllItems;
- (id)_validatedSnapshotForSnapshot:(id)a0;
- (void)setSelectedState:(BOOL)a0 forIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (void)setSelectedState:(BOOL)a0 forIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 andUpdateCursorIndexPath:(BOOL)a2;
- (void)setSelectedState:(BOOL)a0 forIndexPathSet:(id)a1;
- (void)setSelectedIndexPaths:(id)a0;
- (void)setCursorIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)setPendingIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;

@end
