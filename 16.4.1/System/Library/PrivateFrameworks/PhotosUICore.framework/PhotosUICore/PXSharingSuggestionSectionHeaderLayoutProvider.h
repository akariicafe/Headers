@class NSMutableSet, NSDateIntervalFormatter;

@interface PXSharingSuggestionSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

@property (readonly, nonatomic) NSDateIntervalFormatter *dateIntervalFormatter;
@property (nonatomic) BOOL successfullySharedAll;
@property (readonly, nonatomic) NSMutableSet *successfullySharedAssetCollections;

- (void).cxx_destruct;
- (void)_handleShareAssetCollectionCompletion:(id)a0 success:(BOOL)a1 error:(id)a2;
- (id)actionTextForActionType:(long long)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (long long)actionTypeForHeaderLayout:(id)a0;
- (id)primaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)primaryTopHeaderTextForDataSource:(id)a0;
- (id)secondaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)secondaryTopHeaderTextForDataSource:(id)a0;
- (void)sectionHeader:(id)a0 didPressButtonForActionType:(long long)a1 sender:(id)a2;
- (BOOL)wantsHeaderForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)wantsTopHeaderForDataSource:(id)a0;

@end
