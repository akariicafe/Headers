@class CAGradientLayer, NSArray, UIView, UIViewController;
@protocol VUIProductUberBackgroundInterface;

@interface VUIProductShowcaseViewController : _TVStackTemplateController

@property (nonatomic) BOOL lightStatusBar;
@property (retain, nonatomic) UIViewController<VUIProductUberBackgroundInterface> *productBanner;
@property (retain, nonatomic) UIView *navBarGradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSArray *navBarButtons;
@property (retain, nonatomic) UIView *transitionBackgroundView;

- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (long long)preferredStatusBarUpdateAnimation;
- (id)_gradientLayer;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateWithViewElement:(id)a0;
- (void)_setUserActivityData;
- (void)_setupProductBanner;
- (void)_handleAutoHighlightScroll:(id)a0;
- (void)_configureBannerView:(id)a0;
- (void)_configureTransitionBackgroundView;
- (void)_configureNavigationBarGradient;
- (void)configureAppearanceTransition;
- (void)_handleAppWillEnterForeground:(id)a0;
- (long long)_overrideLargeTitleDisplayMode;

@end
