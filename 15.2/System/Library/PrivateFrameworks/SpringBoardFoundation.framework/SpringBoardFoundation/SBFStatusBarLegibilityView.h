@class NSString, UIImageView, UIView, _UILegibilitySettings;

@interface SBFStatusBarLegibilityView : UIView <SBUILegibility>

@property (retain, nonatomic) UIView *statusBarGradientView;
@property (retain, nonatomic) UIImageView *leftCornerView;
@property (retain, nonatomic) UIImageView *rightCornerView;
@property (nonatomic) BOOL forceLegibilityGradientHidden;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusBarGradientView;
+ (id)gradientViewWithOpacities:(const double *)a0 locations:(id)a1;

- (void)layoutSubviews;
- (void)_configureAsPad;
- (void)setStrength:(double)a0;
- (void)_configureWithLegibilitySettings:(id)a0 forceLegibilityGradientHidden:(BOOL)a1;
- (void).cxx_destruct;
- (double)strength;
- (void)_configureAsPhone;

@end
