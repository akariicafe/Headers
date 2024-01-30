@class PXSectionedDataSource, NSOrderedSet, PXIndexPathSet;
@protocol NSObject, PXFastEnumeration, NSCopying;

@interface PXSelectionSnapshot : NSObject

@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXIndexPathSet *selectedIndexPaths;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } cursorIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } pendingIndexPath;
@property (readonly, nonatomic) BOOL isSelectionLimitReached;
@property (readonly, nonatomic) BOOL isEmptySelectionAvoided;
@property (readonly, copy, nonatomic) NSOrderedSet *overallSelectionOrder;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } firstSelectedIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } lastSelectedIndexPath;
@property (readonly, nonatomic) id<NSObject, NSCopying> firstObject;
@property (readonly, nonatomic) PXIndexPathSet *sectionIndexPathsContainingSelection;
@property (readonly, nonatomic) id<PXFastEnumeration> allItemsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allSectionsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allObjectsEnumerator;

- (id)initWithDataSource:(id)a0 selectedIndexPaths:(id)a1 cursorIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (BOOL)isAnySectionSelected;
- (id)fetchSelectedObjects;
- (BOOL)isIndexPathSelected:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathOfObjectPassingTest:(id /* block */)a0;
- (BOOL)areAllItemsSelected;
- (id)initWithDataSource:(id)a0 selectedIndexPaths:(id)a1;
- (id)description;
- (id)initWithDataSource:(id)a0 selectedIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)initWithDataSource:(id)a0 selectedIndexPaths:(id)a1 cursorIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 pendingIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 selectionLimitReached:(BOOL)a4 emptySelectionAvoided:(BOOL)a5 overallSelectionOrder:(id)a6;
- (void)enumerateSelectedObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)overallSelectionOrderIndexForIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isAnyItemSelected;
- (BOOL)areAllUnsavedAssetsSelectedWithImportStatusManager:(id)a0;

@end
