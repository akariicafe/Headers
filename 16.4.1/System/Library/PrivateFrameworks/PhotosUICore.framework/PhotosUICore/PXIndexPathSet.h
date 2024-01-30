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
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } anySectionIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } anyItemIndexPath;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; } anySubitemIndexPath;

+ (id)indexPathSet;
+ (id)indexPathSetWithIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
+ (id)indexPathSetWithItemIndexPaths:(id)a0 dataSourceIdentifier:(long long)a1;
+ (id)indexPathSetWithItemIndexes:(id)a0 dataSourceIdentifier:(long long)a1 section:(long long)a2;
+ (id)indexPathSetWithSectionIndexes:(id)a0 dataSourceIdentifier:(long long)a1;
+ (id)indexPathSetWithSubitemIndexes:(id)a0 dataSourceIdentifier:(long long)a1 section:(long long)a2 item:(long long)a3;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)intersectsSet:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateDataSourceIdentifiers:(id /* block */)a0;
- (BOOL)containsIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)enumerateAllIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateItemIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateItemIndexSetsUsingBlock:(id /* block */)a0;
- (void)enumerateSectionIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateSectionIndexSetsUsingBlock:(id /* block */)a0;
- (void)enumerateSubitemIndexPathsUsingBlock:(id /* block */)a0;
- (void)enumerateSubitemIndexSetsUsingBlock:(id /* block */)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })firstItemIndexPathForDataSourceIdentifier:(long long)a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathGreaterThanIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathLessThanIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)indexPathSetByReplacingDataSourceIdentifier:(long long)a0 withDataSourceIdentifier:(long long)a1;
- (id)itemIndexSetForDataSourceIdentifier:(long long)a0 section:(long long)a1;
- (id)itemsWithSubitemsForDataSourceIdentifier:(long long)a0 section:(long long)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })lastItemIndexPathForDataSourceIdentifier:(long long)a0;
- (id)sectionIndexSetForDataSourceIdentifier:(long long)a0;
- (id)sectionsWithItemsForDataSourceIdentifier:(long long)a0;
- (id)subitemIndexSetForDataSourceIdentifier:(long long)a0 section:(long long)a1 item:(long long)a2;

@end
