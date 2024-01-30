@class SPUISearchBarController, _SBTodaySpotlightViewController, SBHHomePullToSearchSettings, UIScrollView, UIView, NSString, NSLayoutConstraint, MTMaterialView, SBFFluidBehaviorSettings, _UIPortalView, NSArray, NSMutableSet, SBFFeatherBlurView;
@protocol SBTodayViewSpotlightPresenterDelegate;

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver> {
    SBHHomePullToSearchSettings *_pullToSearchSettings;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<SBTodayViewSpotlightPresenterDelegate> delegate;
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings;
@property (nonatomic) long long searchState;
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop;
@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView;
@property (retain, nonatomic) NSLayoutConstraint *featherBlurHeightConstraint;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (retain, nonatomic) MTMaterialView *searchBackdropView;
@property (retain, nonatomic) _SBTodaySpotlightViewController *spotlightViewController;
@property (retain, nonatomic) _UIPortalView *searchBarPortalView;
@property (retain, nonatomic) NSLayoutConstraint *searchBarViewTopConstraint;
@property (retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons;
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0;
- (void)containerViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)isPresenting;
- (void)_willPresentSpotlightAnimated:(BOOL)a0;
- (void)dismissSearchView;
- (void)containerViewDidMoveToWindow:(id)a0;
- (void)_layoutSearchViewsWithMode:(long long)a0 withCompletion:(id /* block */)a1;
- (void)_didDismissSpotlight;
- (void)_beginRequiringSearchBarPortalViewForReason:(id)a0;
- (void)_setUpSearchBackdropMatchMoveAnimation;
- (void)searchBarDidFocus;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dismissSpotlightAnimated:(BOOL)a0;
- (void)presentSpotlightAnimated:(BOOL)a0;
- (id)initWithSearchBarViewController:(id)a0 containerView:(id)a1 scrollView:(id)a2 delegate:(id)a3;
- (void)_endRequiringSearchBarPortalViewForReason:(id)a0;
- (id)sharedRemoteSearchViewController;
- (void)_didPresentSpotlight;
- (void)layout;
- (double)_spotlightPresentationProgressForOffset:(double)a0;
- (void)_layoutSearchViews;
- (void)_setUpSearchAnimationSettings;
- (void)_willDismissSpotlightAnimated:(BOOL)a0;
- (void)_setUpFeatherBackgroundMatchMoveAnimations;
- (double)_topOffset;
- (void)_setUpSearchBar;
- (void)_setUpSearchBackdrop;

@end
