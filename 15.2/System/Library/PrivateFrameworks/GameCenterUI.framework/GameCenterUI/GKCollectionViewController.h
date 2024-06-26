@class NSUUID, NSString, GKLoadableContentStateMachine, GKColorPalette, UINavigationController, GKPlaceholderView, GKSearchBar, UICollectionViewLayout, GKSwipeToEditStateMachine, NSObject, NSMapTable, UIActivityIndicatorView;
@protocol OS_dispatch_queue, UICollectionViewDataSource;

@interface GKCollectionViewController : UICollectionViewController <_GKStateMachineDelegate, GKCollectionViewDataSourceDelegate, UISearchBarDelegate, UITextFieldDelegate, GKSegmentedSectionDataSourceEventHandler> {
    BOOL _skipLoadAfterViewDidLoad;
}

@property (nonatomic) BOOL skipLoadAfterViewDidLoad;
@property (retain, nonatomic) GKLoadableContentStateMachine *loadingMachine;
@property (retain, nonatomic) UICollectionViewLayout *defaultLayout;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView;
@property (nonatomic) long long previousOrientation;
@property BOOL active;
@property BOOL hasViewFactories;
@property BOOL didSlideIn;
@property long long appearCount;
@property (retain, nonatomic) NSMapTable *reusableViewsIHaveSeen;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchUpdateQueue;
@property long long batchUpdateCount;
@property (retain) NSUUID *currentUpdateID;
@property (retain, nonatomic) GKSwipeToEditStateMachine *swipeStateMachine;
@property (retain, nonatomic) id<UICollectionViewDataSource> dataSource;
@property (retain, nonatomic) GKColorPalette *colorPalette;
@property (nonatomic) BOOL shouldSlideInContents;
@property (nonatomic) BOOL showSupplementaryViewsWhileLoading;
@property (readonly, nonatomic) NSString *loadingState;
@property (readonly, nonatomic) BOOL readyToDisplayData;
@property (retain, nonatomic) GKPlaceholderView *placeholderView;
@property (retain, nonatomic) UINavigationController *placeholderNavigationController;
@property (retain, nonatomic) GKSearchBar *activeSearchBar;
@property (retain, nonatomic) NSString *currentSearchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)_initializeSafeCategoryFromValidationManager;

- (void)setNeedsReload;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (id)gkDataSource;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView;
- (id)initWithCollectionViewLayout:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)configureDataSource;
- (void)segmentedSectionDataSource:(id)a0 inSection:(unsigned long long)a1 didSelectDataSourceWithIndex:(long long)a2;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)invalidateSearch;
- (BOOL)hasLoaded;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateMetrics;
- (void)didEnterLoadedState;
- (void)dataSource:(id)a0 didRefreshSections:(id)a1;
- (void)stateWillChange;
- (void)stateDidChange;
- (void)didEnterLoadingState;
- (void)didExitLoadingState;
- (void)didEnterNoContentState;
- (void)didEnterErrorState;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (void)dataSource:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didRemoveItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didRefreshItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didMoveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)dataSource:(id)a0 didInsertSections:(id)a1;
- (void)dataSource:(id)a0 didRemoveSections:(id)a1;
- (void)dataSource:(id)a0 didMoveSection:(long long)a1 toSection:(long long)a2;
- (void)dataSourceDidReloadData:(id)a0;
- (void)dataSource:(id)a0 performBatchUpdate:(id /* block */)a1 complete:(id /* block */)a2;
- (id)_gkRecursiveDescription;
- (void)swipeToDeleteCell:(id)a0;
- (void)willDismissActionSheetFromCell:(id)a0;
- (void)didExitLoadedState;
- (void)didEnterRefreshingState;
- (void)didExitRefreshingState;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)a0;
- (void)startLoadingIndicator;
- (void)stopLoadingIndicator;
- (void)configureViewFactories;
- (void)loadDataWithCompletionHandlerAndError:(id /* block */)a0;
- (void)updateLayoutGuideOffsets;
- (void)clearSelectionHighlight;
- (void)stopLoadingIndicatorWithoutAnimation;
- (void)hidePlaceholderAnimated:(BOOL)a0;
- (void)updateDynamicColumnCountsForViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_systemContentSizeSettingDidChange;
- (id)defaultColorPalette;
- (void)clearButtonPressed:(id)a0;
- (id)currentSearchTerms;
- (void)_finishUpdates:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_applyUpdates:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_loadDataWithCompletionHandlerAndError:(id /* block */)a0;
- (id)footerViewAboveShowMoreViewAtIndexPath:(id)a0;
- (double)showMoreTextMarginAtIndexPath:(id)a0;
- (void)showPlaceholderWithTitle:(id)a0 message:(id)a1 buttonTitle:(id)a2 animated:(BOOL)a3 block:(id /* block */)a4;
- (void)slideInContents;
- (void)_reallyStartLoadingIndicator;
- (void)showCollectionView;
- (void)setIsReadyToDisplayData:(BOOL)a0;
- (void)didBecomeReadyToDisplayData;
- (void)didDisplayData;
- (void)addPlaceholderViewToView:(id)a0;
- (void)dataSource:(id)a0 didUpdatePlaceholderVisibility:(BOOL)a1;
- (void)dataSourceDidMoveSectionsWithItems:(id)a0;
- (void)updateSelectionHighlight;
- (id)nearestSelectableIndexPath:(id)a0;
- (void)_gkRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)didTouchShowMore:(id)a0;
- (void)applyShowMoreLayoutAttributesForShowMoreView:(id)a0 atIndexPath:(id)a1;
- (void)stateDidChangeFromNoContentStateToLoadingState;
- (void)stateDidChangeFromErrorStateToLoadingState;
- (void)stateDidChangeFromLoadedStateToLoadingState;
- (void)stateDidChangeFromNilToLoadingState;
- (void)didExitNoContentState;
- (void)didExitErrorState;
- (void)completeWhenReadyToDisplayData:(id /* block */)a0;
- (void)shutActionPaneAnimated:(BOOL)a0;

@end
