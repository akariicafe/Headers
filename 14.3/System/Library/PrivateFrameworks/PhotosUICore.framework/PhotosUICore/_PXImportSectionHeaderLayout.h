@class PXPhotosLayoutSpec, PXSelectionSnapshot, NSString, PXAssetsDataSource;
@protocol _PXImportSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutViewProvider;

@interface _PXImportSectionHeaderLayout : PXGSingleViewLayout <PXPhotosSectionedLayoutHeader, PXImportHistorySectionHeaderViewDelegate>

@property (weak, nonatomic) id<_PXImportSectionHeaderLayoutInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (retain, nonatomic) PXAssetsDataSource *dataSource;
@property (nonatomic) struct PXSimpleIndexPath { unsigned long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly, nonatomic) BOOL areAllItemsSelected;
@property (readonly, nonatomic) BOOL wantsBackground;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpec:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setWantsBackground:(BOOL)a0;
- (void)headerViewDidPressActionButton:(id)a0;
- (void)_setAreAllItemsSelected:(BOOL)a0;
- (void)floatingOffsetDidChange;

@end
