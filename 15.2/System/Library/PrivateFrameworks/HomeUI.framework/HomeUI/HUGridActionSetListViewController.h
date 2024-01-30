@class HUWallpaperView, HFWallpaperSlice, NSString, HUGridLayoutOptions, UILabel, HUGridActionSetItemManager;
@protocol HUGridActionSetListViewControllerDelegate;

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) HUGridActionSetItemManager *actionSetItemManager;
@property (retain, nonatomic) HUWallpaperView *wallpaperView;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) id<HUGridActionSetListViewControllerDelegate> actionSetListViewControllerDelegate;
@property (nonatomic) BOOL shouldAllowItemPresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)updateMode;
+ (double)requiredHeightWithLayoutOptions:(id)a0 numberOfItems:(unsigned long long)a1;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)itemManager:(id)a0 futureToUpdateItems:(id)a1 itemUpdateOptions:(id)a2;
- (void)itemManager:(id)a0 didRemoveItem:(id)a1 atIndexPath:(id)a2;
- (void)itemManager:(id)a0 didInsertItem:(id)a1 atIndexPath:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)initWithRoom:(id)a0 onlyShowFavorites:(BOOL)a1;
- (id)_performTapActionForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (BOOL)canReorderItemAtIndexPath:(id)a0;
- (id)reorderableHomeKitItemListForSection:(long long)a0;
- (void)setReorderableHomeKitItemList:(id)a0 forSection:(long long)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (void)_updateLayoutScrollDirectionIfNeeded;
- (long long)_scrollDirectionForLayoutOptions:(id)a0;
- (void)_internalSetLayoutOptions:(id)a0;
- (id)_detailsViewControllerForActionSetItem:(id)a0;

@end
