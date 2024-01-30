@class HMRoom, HUWallpaperView, NSString, UIVisualEffect, HFHomeStatusItemManager, HFWallpaperSlice, HUGridLayoutOptions, UIVisualEffectView;

@interface HUGridStatusListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate, HUBackgroundEffectViewGrouping, HUHomeKitObjectPresenting>

@property (retain, nonatomic) HFHomeStatusItemManager *statusItemManager;
@property (retain, nonatomic) UIVisualEffectView *outlineStyleBlurGroupingEffectView;
@property (readonly, nonatomic) HMRoom *room;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUWallpaperView *wallpaperView;
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIVisualEffect *sharedEffect;

+ (unsigned long long)updateMode;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (id)initWithRoom:(id)a0;
- (void)itemManager:(id)a0 didUpdateResultsForItem:(id)a1 atIndexPath:(id)a2;
- (id)itemManager:(id)a0 futureToUpdateItems:(id)a1 itemUpdateOptions:(id)a2;
- (void)diffableDataItemManager:(id)a0 didUpdateItems:(id)a1 addItems:(id)a2 removeItems:(id)a3;
- (id)hu_preloadContent;
- (id)presentHomeKitObject:(id)a0 destination:(unsigned long long)a1 animated:(BOOL)a2;
- (id)presentStatusDetailsForStatusItemClass:(Class)a0 animated:(BOOL)a1;
- (id)quickControlPresentationContextForItem:(id)a0 atIndexPath:(id)a1;
- (id)_performTapActionForItem:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (void)_internalSetLayoutOptions:(id)a0;
- (void)backgroundEffectAddCaptureDependent:(id)a0;
- (void)backgroundEffectRemoveCaptureDependent:(id)a0;
- (id)collectionView:(id)a0 gridLayout:(id)a1 backgroundEffectGroupingAtIndexPath:(id)a2;
- (BOOL)_canSkipStatusDetailsForItem:(id)a0;
- (id)_presentHomeKitObject:(id)a0 fromStatusItem:(id)a1 animated:(BOOL)a2;
- (id)_presentDetailsForHomeKitObject:(id)a0 fromStatusItem:(id)a1 animated:(BOOL)a2;
- (id)_dismissPresentedViewControllersAnimated:(BOOL)a0;
- (BOOL)_statusItemRepresentsOnlyResidentIPads:(id)a0;

@end
