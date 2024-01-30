@class PLDateRangeFormatter, NSString, PXPhotosViewModel, UIImage, PXImportHistorySectionHeaderView;
@protocol PXPhotosSectionHeaderLayoutViewProvider;

@interface PXImportSectionHeaderLayoutProvider : NSObject <PXGSingleViewLayoutDelegate, _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutProvider>

@property (readonly, nonatomic) PXImportHistorySectionHeaderView *referenceHeaderView;
@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter;
@property (readonly, nonatomic) UIImage *gradientImage;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)configurationForSingleViewLayout:(id)a0;
- (id)initWithViewModel:(id)a0 viewProvider:(id)a1;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outShouldFloat:(BOOL *)a4;
- (void)sectionedLayout:(id)a0 headerLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;
- (void)sectionHeader:(id)a0 didToggleSelectedState:(BOOL)a1;
- (struct CGSize { double x0; double x1; })singleViewLayout:(id)a0 desiredSizeForReferenceSize:(struct CGSize { double x0; double x1; })a1;

@end
