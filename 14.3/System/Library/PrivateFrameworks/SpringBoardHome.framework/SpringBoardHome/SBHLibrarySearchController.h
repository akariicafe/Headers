@class SBHSearchBar, UIView, NSArray, SBHIconLibraryTableViewController, NSString, SBFFluidBehaviorSettings, UIScrollView, SBHHomePullToSearchSettings, UIViewController, MTMaterialView, SBHSearchTextField;
@protocol SBHLibrarySearchControllerContentViewControllerScrollViewProvider, SBIconListLayoutProvider, SBHSearchResultsUpdating, SBHLibrarySearchControllerDelegate;

@interface SBHLibrarySearchController : UIViewController <SBHSearchBarDelegate, BSUIScrollViewDelegate, PTSettingsKeyObserver> {
    UIView *_containerView;
    UIView *_contentContainerView;
    UIView *_searchResultsContainerView;
    MTMaterialView *_searchBackdropView;
    UIScrollView *_scrollView;
    SBHHomePullToSearchSettings *_pullToSearchSettings;
}

@property (readonly, nonatomic) SBHSearchTextField *searchField;
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings;
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop;
@property (readonly, nonatomic) long long searchState;
@property (readonly, nonatomic) NSArray *contentViewGradientMaskLayers;
@property (readonly, nonatomic) NSArray *searchResultsGradientMaskLayers;
@property (readonly, nonatomic) SBHSearchBar *searchBar;
@property (readonly, nonatomic) SBHIconLibraryTableViewController *searchResultsController;
@property (readonly, nonatomic) UIViewController<SBHLibrarySearchControllerContentViewControllerScrollViewProvider> *contentViewController;
@property (weak, nonatomic) id<SBHSearchResultsUpdating> searchResultsUpdater;
@property (weak, nonatomic) id<SBHLibrarySearchControllerDelegate> delegate;
@property (retain, nonatomic) UIView *searchDimmingView;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isSearchFieldEditing) BOOL searchFieldEditing;
@property (weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void)_setupSearchAnimationSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateSearchBarFrame:(BOOL)a0;
- (void)_layoutSearchViewsWithMode:(long long)a0 withCompletion:(id /* block */)a1;
- (void)resetSearchController:(BOOL)a0 clearSearchResults:(BOOL)a1 resetSearchBarTransformAndAlpha:(BOOL)a2;
- (void)_performPresentation:(BOOL)a0;
- (void)_layoutSearchViews;
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (double)_searchPresentationProgressForOffset:(double)a0;
- (void)_willPresentSearchAnimated:(BOOL)a0;
- (void)_setUpFeatherMaskLayerMatchMoveAnimations;
- (void)_didPresentSearch;
- (void)_willDismissSearchAnimated:(BOOL)a0;
- (void)_didDismissSearch;
- (BOOL)isTransitionInProgress;
- (id)contentScrollView;
- (id)initWithSearchResultsController:(id)a0 contentViewController:(id)a1;
- (void)endEditingForSearchField;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)_dismissPresentation:(BOOL)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)searchBarCancelButtonClicked:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)searchBarShouldReturn:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
