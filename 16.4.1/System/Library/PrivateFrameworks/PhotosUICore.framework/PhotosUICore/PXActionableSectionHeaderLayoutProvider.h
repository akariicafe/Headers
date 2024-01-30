@class NSString, PXPhotosViewModel, UIImage, PXActionableSectionHeaderView;
@protocol PXPhotosSectionHeaderLayoutViewProvider, PXPhotosSectionHeaderLayoutProviderInvalidationDelegate;

@interface PXActionableSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, PXActionableSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider>

@property (readonly, nonatomic) PXActionableSectionHeaderView *referenceHeaderView;
@property (readonly, nonatomic) UIImage *gradientImage;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> topHeaderInvalidationDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 viewProvider:(id)a1;
- (id)_createSectionHeaderLayoutForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 spec:(id)a2 outShouldFloat:(BOOL *)a3;
- (void)_getPrimaryText:(id *)a0 secondaryText:(id *)a1 forLayout:(id)a2;
- (id)actionTextForActionType:(long long)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (long long)actionTypeForHeaderLayout:(id)a0;
- (id)configurationForSingleViewLayout:(id)a0;
- (void)configureSectionHeaderLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (void)configureTopHeaderLayout:(id)a0 dataSource:(id)a1 spec:(id)a2;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outShouldFloat:(BOOL *)a4;
- (id)createTopHeaderLayoutForDataSource:(id)a0 spec:(id)a1 outShouldFloat:(BOOL *)a2;
- (id)primaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)primaryTopHeaderTextForDataSource:(id)a0;
- (id)secondaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)secondaryTopHeaderTextForDataSource:(id)a0;
- (void)sectionHeader:(id)a0 didPressButtonForActionType:(long long)a1 sender:(id)a2;
- (void)sectionHeader:(id)a0 didToggleSelectedState:(BOOL)a1;
- (void)sectionedLayout:(id)a0 headerLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;
- (void)setSelectedState:(BOOL)a0 forItemsInSectionHeaderLayout:(id)a1;
- (struct CGSize { double x0; double x1; })singleViewLayout:(id)a0 desiredSizeForReferenceSize:(struct CGSize { double x0; double x1; })a1;
- (void)topHeaderLayout:(id)a0 didChangeDataSource:(id)a1;
- (BOOL)wantsHeaderForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (BOOL)wantsTopHeaderForDataSource:(id)a0;

@end
