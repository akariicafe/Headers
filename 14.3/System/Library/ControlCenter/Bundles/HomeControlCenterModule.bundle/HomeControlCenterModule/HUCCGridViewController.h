@class HUGridFlowLayout, NSString, HUGridLayoutOptions, HUCCGridItemManager;
@protocol HUOpenURLHandling, HUCCGridViewControllerDelegate;

@interface HUCCGridViewController : HUControllableItemCollectionViewController <HUPrototypeLayoutOptionsEditorViewControllerDelegate>

@property (readonly, nonatomic) HUGridFlowLayout *collectionViewLayout;
@property (readonly, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (nonatomic) BOOL needsLayoutOptionsUpdate;
@property (readonly, nonatomic) HUCCGridItemManager *itemManager;
@property (nonatomic) unsigned long long sizeSubclass;
@property (readonly, nonatomic) unsigned long long itemType;
@property (weak, nonatomic) id<HUCCGridViewControllerDelegate> delegate;
@property (retain, nonatomic) id<HUOpenURLHandling> URLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)configureCell:(id)a0 forItem:(id)a1;
- (void)viewDidLoad;
- (struct { unsigned long long x0; unsigned long long x1; })_gridLayout;
- (void)viewWillLayoutSubviews;
- (id)itemManager:(id)a0 futureToUpdateItems:(id)a1 itemUpdateOptions:(id)a2;
- (void)itemManager:(id)a0 performUpdateRequest:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutOptionsEditor:(id)a0 didUpdateLayoutOptions:(id)a1;
- (void)layoutOptionsEditorDidFinish:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (BOOL)shouldOverrideTraitCollectionForPresentationCoordinator:(id)a0;
- (id)traitCollectionForPresentationCoordinator:(id)a0;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)a0 item:(id)a1;
- (id)detailsViewControllerForPresentationCoordinator:(id)a0 item:(id)a1;
- (BOOL)presentationCoordinator:(id)a0 shouldBeginPresentationWithContext:(id)a1;
- (id)prepareToPerformToggleActionForItem:(id)a0 sourceItem:(id)a1;
- (id)detailViewURLHandlerForPresentationCoordinator:(id)a0;
- (long long)preferredModalPresentationStyleForPresentationCoordinator:(id)a0;
- (BOOL)presentationCoordinatorShouldDisablePullToUnlockSettings:(id)a0;
- (id)dismissQuickControlAnimated:(BOOL)a0 wasDismissed:(BOOL *)a1;
- (void)_enqueueLayoutOptionsUpdate;
- (void)_updateLayoutOptions;
- (id)_cellLayoutOptionsForItem:(id)a0;
- (void)_checkForCollectionViewAssertions:(id)a0;
- (void)_performItemConsistencyCheckForIndexPaths:(id)a0 withUpdateRequest:(id)a1;
- (id)initWithItemType:(unsigned long long)a0 delegate:(id)a1;
- (BOOL)canDismissQuickControl;
- (id)preloadItemsForPossiblePresentation;
- (void)_updateMaximumNumberOfItems;

@end
