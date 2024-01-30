@class PXPhotosLayoutSpec, NSString, PXSelectionSnapshot, PXAssetsDataSource;
@protocol _PXAlbumSectionHeaderLayoutInteractionDelegate, PXPhotosSectionHeaderLayoutViewProvider;

@interface _PXAlbumSectionHeaderLayout : PXGSingleViewLayout <PXPhotosSectionHeaderViewDelegate, PXPhotosSectionedLayoutHeader>

@property (retain, nonatomic) PXAssetsDataSource *dataSource;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (weak, nonatomic) id<_PXAlbumSectionHeaderLayoutInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly, nonatomic) BOOL areAllItemsSelected;
@property (readonly, nonatomic) BOOL wantsBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;

- (void)_setWantsBackground:(BOOL)a0;
- (id)initWithSpec:(id)a0;
- (void)headerView:(id)a0 actionButtonPressed:(id)a1;
- (void)floatingOffsetDidChange;
- (void).cxx_destruct;
- (id)init;
- (void)didTapHeaderView:(id)a0;
- (void)_setAreAllItemsSelected:(BOOL)a0;
- (void)textSizeDidChangeForHeaderView:(id)a0;

@end
