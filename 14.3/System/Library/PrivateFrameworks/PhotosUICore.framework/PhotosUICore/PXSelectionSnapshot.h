@class PXSectionedDataSource, PXIndexPathSet;
@protocol PXFastEnumeration;

@interface PXSelectionSnapshot : NSObject

@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXIndexPathSet *selectedIndexPaths;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } cursorIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } pendingIndexPath;
@property (readonly, nonatomic) BOOL isSelectionLimitReached;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } firstSelectedIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } lastSelectedIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property (readonly, nonatomic) id<PXFastEnumeration> allItemsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allSectionsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allObjectsEnumerator;

- (BOOL)areAllItemsSelected;
- (id)initWithDataSource:(id)a0 selectedIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (id)init;
- (void).cxx_destruct;
- (id)fetchSelectedObjects;
- (BOOL)isAnySectionSelected;
- (id)initWithDataSource:(id)a0 selectedIndexPaths:(id)a1 cursorIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a2;
- (BOOL)isAnyItemSelected;
- (id)initWithDataSource:(id)a0 selectedIndexPaths:(id)a1;
- (id)description;
- (BOOL)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)a0;
- (BOOL)isIndexPathSelected:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)enumerateSelectedObjectsUsingBlock:(id /* block */)a0;
- (id)initWithDataSource:(id)a0 selectedIndexPaths:(id)a1 cursorIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a2 pendingIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3 selectionLimitReached:(BOOL)a4;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathOfObjectPassingTest:(id /* block */)a0;

@end
