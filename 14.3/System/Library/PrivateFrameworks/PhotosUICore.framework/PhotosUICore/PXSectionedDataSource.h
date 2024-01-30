@class NSNumber, NSString, PXIndexPathSet, NSObject;
@protocol OS_os_log, PXFastEnumeration;

@interface PXSectionedDataSource : NSObject <NSCopying, PXSectionedLayoutEngineDataSourceSnapshot> {
    NSNumber *_containsAnyItemsCache;
    NSNumber *_containsMultipleItemsCache;
    struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } _firstItemIndexPathCache;
    struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } _lastItemIndexPathCache;
}

@property (readonly, nonatomic) NSObject<OS_os_log> *sectionedDataSourceLog;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) BOOL containsAnyItems;
@property (readonly, nonatomic) BOOL containsMultipleItems;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } firstSectionIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } lastSectionIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *allSectionIndexPaths;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } firstItemIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } lastItemIndexPath;
@property (readonly, nonatomic) PXIndexPathSet *allItemIndexPaths;
@property (readonly, nonatomic) PXIndexPathSet *allIndexPaths;
@property (readonly, nonatomic) id<PXFastEnumeration> allItemsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allSectionsEnumerator;
@property (readonly, nonatomic) id<PXFastEnumeration> allObjectsEnumerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyDataSource;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectIDAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (Class)objectReferenceClassForSection;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSubItem;
- (id)objectReferenceForObjectReference:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })convertIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 fromSectionedDataSource:(id)a1;
- (id)convertIndexPathSet:(id)a0 fromSectionedDataSource:(id)a1;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 untilEndIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1 usingBlock:(id /* block */)a2;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })firstNonEmptySectionAtOrBeforeSection:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)itemsEnumeratorForIndexPaths:(id)a0;
- (id)fetchAllItemObjects;
- (id)sectionsEnumeratorForIndexPaths:(id)a0;
- (id)objectsEnumeratorForIndexPaths:(id)a0;
- (id)indexPathSetForItemsInIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)itemIndexPathsForSections:(id)a0;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 toIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a1;
- (id)objectIDsForIndexPathSet:(id)a0;
- (long long)_numberOfAssetsWithMaximum:(long long)a0;
- (void)prefetchSections:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)inputForItem:(id)a0;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathSetForObjectIDs:(id)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathForObjectID:(id)a0;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (void)prefetchIndexPaths:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;
- (unsigned long long)totalItemCount;
- (BOOL)couldObjectReferenceAppear:(id)a0;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0 reverseDirection:(BOOL)a1 usingBlock:(id /* block */)a2;

@end
