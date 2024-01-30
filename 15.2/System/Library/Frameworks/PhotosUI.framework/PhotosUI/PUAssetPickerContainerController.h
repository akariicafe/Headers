@class UIBarButtonItem, PUSessionInfo, PXAssetsDataSourceManager, UILabel, UISearchController, PXSearchComposableDataSource, PUAssetPickerSearchSuggestionsHeaderView, UIButton, PXGAnchor, PXPhotosUIViewController, PUAlbumsGadgetViewController, UISegmentedControl, NSString, PXSearchQueryController, PXSelectionCoordinator, PUPickerConfiguration, PXSectionedSelectionManager, PUPhotoPickerResizeTaskDescriptorViewModel;
@protocol PUAssetPickerContainerControllerActionHandler;

@interface PUAssetPickerContainerController : UIViewController <UISearchResultsUpdating, UISearchBarDelegate, PXPhotosViewDelegate, PXScrollViewControllerObserver, PUAssetPickerSearchSuggestionsSelectionDelegate, PXChangeObserver, PUAssetPickerSuggestionsViewControllerActionHandler>

@property (readonly, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel;
@property (readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator;
@property (readonly, weak, nonatomic) id<PUAssetPickerContainerControllerActionHandler> containerControllerActionHandler;
@property (readonly, nonatomic) UISegmentedControl *navigationBarSegmentedControl;
@property (nonatomic) long long previousNavigationBarSegmentedControlSelectedIndex;
@property (readonly, nonatomic) UIBarButtonItem *navigationBarAddButton;
@property (readonly, nonatomic) UIBarButtonItem *navigationBarDoneButton;
@property (readonly, nonatomic) UIBarButtonItem *navigationBarCancelButton;
@property (readonly, nonatomic) UIBarButtonItem *navigationBarClearButton;
@property (readonly, nonatomic) UIButton *toolbarSelectedItemsButton;
@property (readonly, nonatomic) UILabel *toolbarFileSizeLabel;
@property (readonly, nonatomic) UIBarButtonItem *toolbarSelectedItemsFileSizeStackView;
@property (readonly, nonatomic) UIBarButtonItem *toolbarSelectAllButton;
@property (readonly, nonatomic) UIBarButtonItem *toolbarDeselectAllButton;
@property (readonly, nonatomic) PXPhotosUIViewController *photosViewController;
@property (retain, nonatomic) PXGAnchor *pinToTopAnchor;
@property (readonly, nonatomic) PXAssetsDataSourceManager *photosDataSourceManager;
@property (readonly, nonatomic) PXSectionedSelectionManager *photosSelectionManager;
@property (nonatomic) BOOL allowSafeAreaChangeAnchor;
@property (readonly, nonatomic) PUAlbumsGadgetViewController *allAlbumsGadgetViewController;
@property (readonly, nonatomic) UISearchController *searchController;
@property (readonly, nonatomic) PXSearchQueryController *queryController;
@property (readonly, nonatomic) PXSearchComposableDataSource *searchSuggestionsCollectionViewDataSource;
@property (readonly, nonatomic) PUAssetPickerSearchSuggestionsHeaderView *searchSuggestionsHeaderView;
@property (readonly, nonatomic) PUPickerConfiguration *configuration;
@property (readonly, nonatomic) PUSessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_hideSearchBarWhenScrolling;
+ (id)_setupSearchQueryControllerWithSuggestionsSectionProvider:(id)a0 photosDataSourceManager:(id)a1 suggestionsHeaderView:(id)a2 photosViewController:(id)a3;
+ (id)photosTabTitleForConfiguration:(id)a0;

- (id)px_gridPresentation;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)_updateNavigationBar;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)ppt_prepareForSearchTest:(id /* block */)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (BOOL)photosViewController:(id)a0 didPickAssetReference:(id)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)updateBars;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)didSelectSuggestionAtIndexPath:(id)a0 collectionView:(id)a1;
- (id)initWithConfiguration:(id)a0 loadingStatusManager:(id)a1 resizeTaskDescriptorViewModel:(id)a2 selectionCoordinator:(id)a3 actionHandler:(id)a4;
- (void)suggestionsViewController:(id)a0 didTapAsset:(id)a1;
- (id)photosViewController:(id)a0 animationForProposedAnimation:(id)a1;
- (id)headerViewForPhotosViewController:(id)a0;
- (BOOL)allowsContextMenuInteractionForPhotosViewController:(id)a0;
- (void)_updateToolbarBar;
- (void)handleNavigationBarSegmentedControl:(id)a0;
- (void)handleNavigationBarCancelButton:(id)a0;
- (void)handleNavigationBarClearButton:(id)a0;
- (void)handleNavigationBarAddButton:(id)a0;
- (void)handleToolbarSelectedItemsButton:(id)a0;
- (void)handleToolbarSelectAllButton:(id)a0;
- (void)handleToolbarDeselectAllButton:(id)a0;
- (id)_createSearchController;
- (id)_setupCollectionViewLayoutWithSectionProviders:(id)a0;
- (id)_sectionLayoutForSection:(long long)a0 environment:(id)a1;
- (void)_updateSearchFieldWithSuggestion:(id)a0;
- (unsigned long long)_searchSuggestionLimit;
- (void)ppt_switchToAlbumsTab;

@end
