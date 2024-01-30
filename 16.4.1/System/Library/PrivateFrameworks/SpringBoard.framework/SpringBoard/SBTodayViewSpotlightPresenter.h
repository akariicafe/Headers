@class UIView, SBSearchPresenter, NSArray, UIScrollView, _SBTodaySpotlightViewController, NSString, SPUISearchBarController, _UILegibilitySettings, SBHHomePullToSearchSettings, UIViewController, SBFFeatherBlurView;
@protocol SBTodayViewSpotlightPresenterDelegate;

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, SBLegacyTodayViewSpotlightPresentableViewControllerDelegate, SBHLegibility> {
    SBHHomePullToSearchSettings *_pullToSearchSettings;
}

@property (retain, nonatomic) SBSearchPresenter *presenter;
@property (retain, nonatomic) _SBTodaySpotlightViewController *spotlightMultiplexingViewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<SBTodayViewSpotlightPresenterDelegate> delegate;
@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView;
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers;
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController;
@property (readonly, nonatomic) UIViewController *spotlightViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (BOOL)wantsHomeAffordanceForSpotlightPresentableViewController:(id)a0;
- (id)searchAffordanceViewForSpotlightPresentableViewController:(id)a0;
- (void)searchPresenterDidPresentSearch:(id)a0;
- (BOOL)searchPresenterCanPresent:(id)a0;
- (void)presentSpotlightAnimated:(BOOL)a0;
- (void)dismissSpotlightAnimated:(BOOL)a0;
- (void)searchPresenterWillPresentSearch:(id)a0 animated:(BOOL)a1;
- (id)searchPresentablesForPresenter:(id)a0;
- (id)initWithSearchBarViewController:(id)a0 containerView:(id)a1 scrollView:(id)a2 delegate:(id)a3;
- (void)legacyTodayViewSpotlightPresentableViewControllerShouldDismiss:(id)a0;
- (void)searchBarDidFocus;
- (double)searchTopOffsetForSearchPresenter:(id)a0;
- (void)searchPresenterDidDismissSearch:(id)a0;
- (void)spotlightPresentableViewControllerShouldDismiss:(id)a0;
- (void)searchPresenterWillDismissSearch:(id)a0 animated:(BOOL)a1;
- (BOOL)isPresenting;
- (id)backgroundViewForSpotlightPresentableViewController:(id)a0;
- (void)layout;
- (double)_topOffset;
- (void)_updateFeatherBlurMaskLayers;
- (void)containerViewDidMoveToWindow:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_setUpFeatherBlur;
- (void)_configureFeatherBlurMatchMoveAnimations;
- (void)scrollViewWillEndDragging:(id)a0;
- (id)_newSearchBackdropView;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void).cxx_destruct;
- (id)backdropViewForLegacyTodayViewSpotlightPresentableViewController:(id)a0;

@end
