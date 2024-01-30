@class HUWallpaperView, HUGridCameraItemManager, HFWallpaperSlice, HUGridLayoutOptions, NSString, HUCameraController;

@interface HUGridCameraListViewController : HUControllableItemCollectionViewController <HUCameraControllerDelegate, HUHomeKitObjectPresenting> {
    BOOL _useCustomDragAndDrop;
}

@property (retain, nonatomic) HUCameraController *cameraController;
@property (readonly, nonatomic) HUGridCameraItemManager *cameraItemManager;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUWallpaperView *wallpaperView;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)updateMode;
+ (double)requiredHeightWithLayoutOptions:(id)a0 numberOfItems:(unsigned long long)a1;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void).cxx_destruct;
- (id)init;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)itemManager:(id)a0 futureToUpdateItems:(id)a1 itemUpdateOptions:(id)a2;
- (void)itemManager:(id)a0 didInsertItem:(id)a1 atIndexPath:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)initWithRoom:(id)a0 onlyShowFavorites:(BOOL)a1;
- (id)hu_preloadContent;
- (id)presentHomeKitObject:(id)a0 destination:(unsigned long long)a1 animated:(BOOL)a2;
- (id)presentCameraProfile:(id)a0 startDate:(id)a1 endDate:(id)a2 animated:(BOOL)a3;
- (id)presentCameraProfile:(id)a0 forCameraClip:(id)a1 animated:(BOOL)a2;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (BOOL)canReorderItemAtIndexPath:(id)a0;
- (id)reorderableHomeKitItemListForSection:(long long)a0;
- (void)setReorderableHomeKitItemList:(id)a0 forSection:(long long)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)useCustomDragAndDrop;
- (void)setUseCustomDragAndDrop:(BOOL)a0;
- (void)_setCamerasEnabled:(BOOL)a0 forCells:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSizeForCollectionViewContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateLayoutScrollDirectionIfNeeded;
- (long long)_scrollDirectionForLayoutOptions:(id)a0;
- (void)_internalSetLayoutOptions:(id)a0;
- (void)_logInteractionEventOfType:(unsigned long long)a0 withItem:(id)a1;
- (id)_detailsViewControllerForCameraItem:(id)a0;
- (id)presentCameraItem:(id)a0 startDate:(id)a1 endDate:(id)a2 animated:(BOOL)a3;
- (id)_sourceViewForPresentingCameraItem:(id)a0;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0 startDate:(id)a1 endDate:(id)a2 animated:(BOOL)a3;
- (id)_presentCameraItem:(id)a0 forFuture:(id)a1 animated:(BOOL)a2;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0 forCameraClip:(id)a1 animated:(BOOL)a2;
- (id)presentCameraItem:(id)a0 forCameraClip:(id)a1 animated:(BOOL)a2;
- (id)_presentDetailsViewControllerForCameraItem:(id)a0 animated:(BOOL)a1;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)a0 withConfiguration:(id)a1;
- (id)customContextualMenuItemsForItem:(id)a0;
- (void)_showCameraViewerForSelectedMenuItem;
- (id)detailsViewControllerForCameraItem:(id)a0;
- (id)targetViewForDismissingCameraProfile:(id)a0;
- (void)didDismissCameraController:(id)a0 ForProfile:(id)a1;

@end
