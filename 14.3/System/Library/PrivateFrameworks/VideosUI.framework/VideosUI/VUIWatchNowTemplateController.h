@class UIImageView, VUIWatchNowTemplateBackgroundLayer;

@interface VUIWatchNowTemplateController : _TVStackTemplateController

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) VUIWatchNowTemplateBackgroundLayer *backgroundImageGradientLayer;
@property (retain, nonatomic) UIImageView *gradientImageView;
@property (nonatomic) BOOL shouldFocusUpNext;
@property (nonatomic, getter=isUpNextFocused) BOOL upNextFocused;

- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)_updateBackgroundImage;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)a0;
- (BOOL)_doesCollectionViewHasItems;
- (id)_watchNowBannerScrollStop;
- (void)focusUpNextAnimated:(BOOL)a0;
- (void)showcaseFactorDidChange;
- (id)scrollStopForShowcaseTransition;
- (id)scrollStopForEnteringSectionAtIndex:(long long)a0 fromEdge:(long long)a1;
- (BOOL)shouldAdjustForTabBarSafeAreaInsets;

@end
