@class UIView, SBModalWidgetIntroductionHomeScreenPreview, NSArray, UIImageView, UIButton, NSMutableArray, NSLayoutConstraint, SBModalWidgetIntroductionBackgroundDescriptionView;

@interface SBModalWidgetIntroductionViewController : UIViewController

@property (retain, nonatomic) NSMutableArray *dismissCompletions;
@property (retain, nonatomic) SBModalWidgetIntroductionBackgroundDescriptionView *backgroundDescriptionView;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonTopAnchorConstraint;
@property (retain, nonatomic) UIView *homescreenPreviewContainer;
@property (retain, nonatomic) UIImageView *homescreenPreviewSnapshot;
@property (retain, nonatomic) UIView *onboardingWidgetPreviewsContainer;
@property (retain, nonatomic) UIView *onboardingStaticWidgetPreview;
@property (retain, nonatomic) UIView *onboardingFallingWidgetPreviewTop;
@property (retain, nonatomic) UIView *onboardingFallingWidgetPreviewMiddle;
@property (retain, nonatomic) UIView *onboardingFallingWidgetPreviewBottom;
@property (retain, nonatomic) SBModalWidgetIntroductionHomeScreenPreview *homescreenPreview;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } homeScreenPreviewSublayerTransform;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } onboardingFallingWidgetPreviewSublayerTransformTop;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } onboardingFallingWidgetPreviewSublayerTransformMiddle;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } onboardingFallingWidgetPreviewSublayerTransformBottom;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } appliedSublayerTransform;
@property (retain, nonatomic) NSArray *onboardingFallingWidgetPreviews;
@property (nonatomic) struct CGPoint { double x; double y; } onboardingFallingWidgetCenterPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } onboardingFallingWidgetBounds;
@property (retain, nonatomic) NSArray *onboardingStaticWidgetPreviews;
@property (nonatomic) struct CGPoint { double x; double y; } onboardingStaticWidgetCenterPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } onboardingStaticWidgetBounds;

- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)continueButtonTapped:(id)a0;
- (void)addContinueButton;
- (void)appendDismissCompletion:(id /* block */)a0;
- (void)cleanUpForViewControllerDismissal;
- (void)dismissPreviewAndButton;
- (void)displayPreviewAndButton;
- (void)loadPreviewSnapshot;
- (void)setHomeScreenPreview:(id)a0;
- (void)setupSublayerDismissPreviewTransformForView:(id)a0 withTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;
- (void)setupSublayerDisplayPreviewTransformForView:(id)a0 withTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1;

@end
