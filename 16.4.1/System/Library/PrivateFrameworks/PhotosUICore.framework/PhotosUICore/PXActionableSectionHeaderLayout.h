@class PXPhotosLayoutSpec, NSString, PXSelectionSnapshot, PXAssetsDataSource;
@protocol PXPhotosSectionHeaderLayoutViewProvider, PXActionableSectionHeaderLayoutInteractionDelegate;

@interface PXActionableSectionHeaderLayout : PXGSingleViewLayout <PXActionableSectionHeaderViewDelegate, PXPhotosSectionedLayoutHeader>

@property (weak, nonatomic) id<PXActionableSectionHeaderLayoutInteractionDelegate> interactionDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly, nonatomic) BOOL isTopHeader;
@property (retain) PXAssetsDataSource *dataSource;
@property (nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } sectionIndexPath;
@property (readonly, nonatomic) BOOL areAllItemsSelected;
@property (readonly, nonatomic) BOOL wantsBackground;
@property (nonatomic) BOOL alwaysWantsBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXPhotosLayoutSpec *spec;
@property (nonatomic) BOOL isInSelectMode;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;

- (id)initWithSpec:(id)a0;
- (void)scrollSpeedRegimeDidChange;
- (void)headerViewDidPressActionButton:(id)a0 inHeaderView:(id)a1;
- (id)init;
- (void)floatingOffsetDidChange;
- (void).cxx_destruct;
- (void)_setWantsBackground:(BOOL)a0;
- (void)_setAreAllItemsSelected:(BOOL)a0;

@end
