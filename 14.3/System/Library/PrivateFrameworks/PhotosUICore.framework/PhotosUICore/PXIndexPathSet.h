@class NSMutableDictionary;

@interface PXIndexPathSet : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSMutableDictionary *_sectionIndexesByDataSourceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_indexesForSectionsWithItemsByDataSourceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_itemIndexesBySectionByDataSourceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_indexesForItemsWithSubitemsBySectionByDataSourceIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_subitemIndexesByItemBySectionByDataSourceIdentifier;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long sectionCount;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, nonatomic) long long subitemCount;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } anySectionIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } anyItemIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; } anySubitemIndexPath;

+ (id)indexPathSet;
+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
+ (id)indexPathSetWithSectionIndexes:(id)a0 dataSourceIdentifier:(unsigned long long)a1;
+ (id)indexPathSetWithItemIndexes:(id)a0 dataSourceIdentifier:(unsigned long long)a1 section:(long long)a2;
+ (id)indexPathSetWithItemIndexPaths:(id)a0 dataSourceIdentifier:(unsigned long long)a1;
+ (id)indexPathSetWithSubitemIndexes:(id)a0 dataSourceIdentifier:(unsigned long long)a1 section:(long long)a2 item:(long long)a3;

- (void)enumerateItemIndexPathsUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (BOOL)containsIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (void)enumerateItemIndexSetsUsingBlock:(id /* block */)a0;
- (BOOL)intersectsSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)enumerateSubitemIndexSetsUsingBlock:(id /* block */)a0;
- (void)enumerateSectionIndexSetsUsingBlock:(id /* block */)a0;
- (id)sectionIndexSetForDataSourceIdentifier:(unsigned long long)a0;
- (id)sectionsWithItemsForDataSourceIdentifier:(unsigned long long)a0;
- (id)itemIndexSetForDataSourceIdentifier:(unsigned long long)a0 section:(long long)a1;
- (id)itemsWithSubitemsForDataSourceIdentifier:(unsigned long long)a0 section:(long long)a1;
- (id)subitemIndexSetForDataSourceIdentifier:(unsigned long long)a0 section:(long long)a1 item:(long long)a2;
- (void)enumerateSectionIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateSubitemIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateAllIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateDataSourceIdentifiers:(id /* block */)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })firstItemIndexPathForDataSourceIdentifier:(unsigned long long)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })lastItemIndexPathForDataSourceIdentifier:(unsigned long long)a0;
- (struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })indexPathLessThanIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathSetByReplacingDataSourceIdentifier:(unsigned long long)a0 withDataSourceIdentifier:(unsigned long long)a1;

@end
