@class NSArray, UIImageView, HUGridLayoutOptions, UIView, UIScrollView, UILabel;
@protocol HUAboutResidentDeviceViewControllerDelegate;

@interface HUAboutResidentDeviceViewController : UIViewController

@property (readonly, nonatomic) unsigned long long style;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIView *statusBarBackgroundView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *atvImageView;
@property (retain, nonatomic) UIImageView *homePodImageView;
@property (retain, nonatomic) UILabel *homeHubTextLabel;
@property (retain, nonatomic) UIImageView *iPadImageView;
@property (retain, nonatomic) UILabel *iPadTextLabel;
@property (weak, nonatomic) id<HUAboutResidentDeviceViewControllerDelegate> delegate;

+ (double)subtitleBaselineToATVImageConstant;
+ (double)scrollViewTopToATVImageConstant;
+ (double)atvImageToTextBaselineConstantForViewSizeSubclass:(long long)a0;
+ (double)atvTextBaselineToiPadImageConstant;
+ (double)iPadImageToTextBaselineConstantForViewSizeSubclass:(long long)a0;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)_done:(id)a0;
- (void)_createSubviews;
- (id)initWithStyle:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)_backgroundColor;
- (void)updateViews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setNavigationBarVisibility;
- (BOOL)_shouldShowNavigationBar;
- (void)updateViewsAndConstraints;
- (BOOL)useNavigationBarForAutomationTabStyle;

@end
