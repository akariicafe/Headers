@class SBHSearchBar, UIView, NSArray, SBHIconLibraryTableViewController, NSString, SBFFluidBehaviorSettings, UIScrollView, SBHHomePullToSearchSettings, SBHSearchVisualConfiguration, UIViewController, SBHAppLibraryVisualConfiguration, SBHSearchTextField;
@protocol SBHLibrarySearchControllerContentViewControllerScrollViewProvider, SBIconListLayoutProvider, SBHSearchResultsUpdating, SBHLibrarySearchControllerDelegate;

@interface SBHLibrarySearchController : UIViewController <SBHSearchBarDelegate, BSUIScrollViewDelegate, SBHIconLibraryTableViewControllerLayoutDelegate, UIGestureRecognizerDelegate, PTSettingsKeyObserver> {
    UIView *_containerView;
    UIView *_contentContainerView;
    UIView *_searchResultsContainerView;
    UIView *_searchBackgroundView;
    UIView *_searchResultsPlatterView;
    UIScrollView *_scrollView;
    SBHHomePullToSearchSettings *_pullToSearchSettings;
    SBHSearchVisualConfiguration *_searchVisualConfiguration;
    SBHAppLibraryVisualConfiguration *_libraryVisualConfiguration;
    BOOL _needsLowQualityBackgroundEffects;
    BOOL _disablePullToSearch;
}

@property (readonly, nonatomic) SBHSearchTextField *searchField;
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings;
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop;
@property (readonly, nonatomic) long long searchState;
@property (readonly, nonatomic) NSArray *contentViewGradientMaskLayers;
@property (readonly, nonatomic) NSArray *searchResultsGradientMaskLayers;
@property (readonly, nonatomic) SBHSearchBar *searchBar;
@property (nonatomic) unsigned long long searchBarAppearance;
@property (readonly, nonatomic) BOOL usesPlatterAppearance;
@property (readonly, nonatomic) SBHIconLibraryTableViewController *searchResultsController;
@property (readonly, nonatomic) UIViewController<SBHLibrarySearchControllerContentViewControllerScrollViewProvider> *contentViewController;
@property (weak, nonatomic) id<SBHSearchResultsUpdating> searchResultsUpdater;
@property (weak, nonatomic) id<SBHLibrarySearchControllerDelegate> delegate;
@property (retain, nonatomic) UIView *searchDimmingView;
@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isSearchFieldEditing) BOOL searchFieldEditing;
@property (weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (nonatomic) BOOL forcedSearchTextFieldNoneditable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewWillBeginScrolling:(id)a0;
- (double)_searchPresentationProgressForOffset:(double)a0;
- (void)_didDismissSearch;
- (void)scrollViewDidEndScrolling:(id)a0;
- (void)searchBarTextDidEndEditing:(id)a0;
- (double)fixedBottomLayoutInsetInWindowCoordinateSpaceForTableViewController:(id)a0;
- (BOOL)searchBarShouldReturn:(id)a0;
- (BOOL)searchBarShouldEndEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForSearchBar:(id)a0;
- (void)ppt_setDisablePullToSearch:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_inactiveSearchConfiguration;
- (void)_setupSearchAnimationSettings;
- (id)_activeSearchConfiguration;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_layoutSearchViewsWithMode:(long long)a0 withCompletion:(id /* block */)a1;
- (void)resetSearchController:(BOOL)a0 clearSearchResults:(BOOL)a1 resetSearchBarTransformAndAlpha:(BOOL)a2;
- (void)searchBarCancelButtonClicked:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (void)_willPresentSearchAnimated:(BOOL)a0;
- (void)_layoutSearchViews;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (double)_bottomLayoutInsetForSearchResultsView;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)isTransitionInProgress;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)beginEditingForSearchField;
- (id)contentScrollView;
- (void)_setUpFeatherMaskLayerMatchMoveAnimations;
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)endEditingForSearchField;
- (void)searchBarDidInvalidateIntrinsicContentSize:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithSearchResultsController:(id)a0 contentViewController:(id)a1 usingPlatterAppearance:(BOOL)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)_performPresentation:(BOOL)a0;
- (id)keyCommands;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateSearchBarFrame:(BOOL)a0;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)_didPresentSearch;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_willDismissSearchAnimated:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_dismissPresentation:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateSearchBarFrame:(BOOL)a0 forExplicitVisualConfiguration:(id)a1;
- (void)_updateEffectiveSearchVisualConfiguration;

@end
