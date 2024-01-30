@class UIScrollView, NSString, NSArray, SBHHomePullToSearchSettings, SPUISearchBarController, _UIPortalView, SBSpotlightMultiplexingViewController, NSLayoutConstraint, NSMutableSet, MTMaterialView, SBFFeatherBlurView;
@protocol SBLegacyTodayViewSpotlightPresentableViewControllerDelegate;

@interface SBLegacyTodayViewSpotlightPresentableViewController : UIViewController <SPUIRemoteSearchViewDelegate, SBSearchPresentable>

@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView;
@property (retain, nonatomic) NSLayoutConstraint *featherBlurHeightConstraint;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (retain, nonatomic) MTMaterialView *searchBackdropView;
@property (retain, nonatomic) _UIPortalView *searchBarPortalView;
@property (retain, nonatomic) NSLayoutConstraint *searchBarViewTopConstraint;
@property (retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons;
@property (weak, nonatomic) id<SBLegacyTodayViewSpotlightPresentableViewControllerDelegate> delegate;
@property (readonly, nonatomic) SBSpotlightMultiplexingViewController *spotlightMultiplexingViewController;
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double topOffset;
@property (nonatomic) double maxPresentationOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SBHHomePullToSearchSettings *searchTransitionSettings;

- (void)dismissSearchView;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id /* block */)willBeginModifyingPresentationProgressForState:(long long)a0 animated:(BOOL)a1 needsInitialLayout:(BOOL *)a2;
- (void)updatePresentationProgress:(double)a0 withOffset:(double)a1 presentationState:(long long)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)_endRequiringSearchBarPortalViewForReason:(id)a0;
- (void)viewDidLoad;
- (id)_sharedRemoteSearchViewController;
- (void)_beginRequiringSearchBarPortalViewForReason:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_setUpSearchBar;
- (void)_setUpFeatherBackgroundMatchMoveAnimations;
- (void)_setUpSearchBackdrop;
- (void)_setUpSearchBackdropMatchMoveAnimation;
- (void)_updateMaskLayers;
- (id)initWithSpotlightMultiplexingViewController:(id)a0 searchBarViewController:(id)a1 scrollView:(id)a2;

@end
