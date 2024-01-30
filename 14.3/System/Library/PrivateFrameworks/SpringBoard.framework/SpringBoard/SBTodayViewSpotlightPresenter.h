@class SPUISearchBarController, SBHFeatherBlurView, _SBTodaySpotlightViewController, SBHHomePullToSearchSettings, UIView, NSLayoutConstraint, NSString, UIScrollView, MTMaterialView, SBFFluidBehaviorSettings, _UIPortalView, NSArray, NSMutableSet;
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
@property (retain, nonatomic) SBHFeatherBlurView *featherBlurView;
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

- (BOOL)isPresenting;
- (void)_layoutSearchViewsWithMode:(long long)a0 withCompletion:(id /* block */)a1;
- (void)_layoutSearchViews;
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dismissSearchView;
- (void)searchBarDidFocus;
- (void)layout;
- (double)_topOffset;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (id)sharedRemoteSearchViewController;
- (void)dismissSpotlightAnimated:(BOOL)a0;
- (id)initWithSearchBarViewController:(id)a0 containerView:(id)a1 scrollView:(id)a2 delegate:(id)a3;
- (void)containerViewDidMoveToWindow:(id)a0;
- (void)containerViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0;
- (void)_setUpSearchAnimationSettings;
- (void)_setUpSearchBar;
- (void)_setUpSearchBackdrop;
- (void)_setUpSearchBackdropMatchMoveAnimation;
- (void)_setUpFeatherBackgroundMatchMoveAnimations;
- (void)_willPresentSpotlightAnimated:(BOOL)a0;
- (void)_beginRequiringSearchBarPortalViewForReason:(id)a0;
- (double)_spotlightPresentationProgressForOffset:(double)a0;
- (void)_didPresentSpotlight;
- (void)_willDismissSpotlightAnimated:(BOOL)a0;
- (void)_endRequiringSearchBarPortalViewForReason:(id)a0;
- (void)_didDismissSpotlight;
- (void)presentSpotlightAnimated:(BOOL)a0;

@end
