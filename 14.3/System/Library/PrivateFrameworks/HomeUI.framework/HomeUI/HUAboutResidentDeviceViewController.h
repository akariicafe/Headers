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

- (id)initWithStyle:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)_createSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)_backgroundColor;
- (void)viewDidLoad;
- (void)updateViews;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setNavigationBarVisibility;
- (void)updateViewsAndConstraints;
- (BOOL)useNavigationBarForAutomationTabStyle;

@end
