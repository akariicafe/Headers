@class DBStatusBarViewController, CRSUIStatusBarStyleService, UITapGestureRecognizer, UIVisualEffectView, UIView, DBStatusBarScreenResizeButton, NSString, DBStatusBarHomeButton, NSTimer, SiriActivityAssertion, NSArray, DBAppDockViewController, SiriLongPressButtonSource;
@protocol DBEnvironment, BSInvalidatable;

@interface DBRootStatusBarViewController : UIViewController <CRSUIStatusBarStyleServiceDelegate, DBAppDockViewControllerDelegate, BSInvalidatable, DBStatusBarButtonStateManagerDelegate, DBWorkspaceObserver>

@property (retain, nonatomic) DBStatusBarHomeButton *homeButton;
@property (retain, nonatomic) NSTimer *homeButtonTimer;
@property (nonatomic) double lastHomeButtonDownTime;
@property (retain, nonatomic) SiriLongPressButtonSource *homeButtonSource;
@property (retain, nonatomic) SiriActivityAssertion *homeButtonAssertion;
@property (retain, nonatomic) DBStatusBarScreenResizeButton *screenResizeButton;
@property (retain, nonatomic) DBAppDockViewController *appDockViewController;
@property (retain, nonatomic) UIView *keylineView;
@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) DBStatusBarViewController *statusBarViewController;
@property (retain, nonatomic) UIVisualEffectView *darkMaterial;
@property (retain, nonatomic) UIVisualEffectView *lightMaterial;
@property (retain, nonatomic) UIVisualEffectView *darkSiriMaterial;
@property (retain, nonatomic) UIVisualEffectView *lightSiriMaterial;
@property (retain, nonatomic) UITapGestureRecognizer *backPressGestureRecognizer;
@property (retain, nonatomic) NSArray *homeButtonConstraints;
@property (retain, nonatomic) NSArray *resizeButtonConstraints;
@property (nonatomic) unsigned long long currentStatusBarEdge;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) CRSUIStatusBarStyleService *statusBarStyleService;
@property (retain, nonatomic) id<BSInvalidatable> serviceDomainActivationToken;
@property (nonatomic) long long contrastOverride;
@property (nonatomic) BOOL siriPresentationOverride;
@property (nonatomic) unsigned long long transitionControlType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)_focusHighlightColor;
- (id)_backgroundColorForStyle:(long long)a0;
- (void)statusBarStyleServiceUpdatedOverride:(id)a0 animationSettings:(id)a1;
- (void)_updateAdditionalSafeAreaInsets;
- (void)homeButtonDown:(id)a0;
- (void)_handleBackPressGesture:(id)a0;
- (void)_handleLongPressActivation;
- (void)_resizeButtonPressed:(id)a0;
- (void)_updateConstraintsForStatusBar;
- (void)_updateMaterialForStyle:(long long)a0;
- (void)_updateScreenResizeButton;
- (void)appDockViewController:(id)a0 didSelectBundleID:(id)a1;
- (void)homeButtonCancel:(id)a0;
- (void)homeButtonUp:(id)a0;
- (id)initWithEnvironment:(id)a0 iconProvider:(id)a1 stateProvider:(id)a2;
- (void)statusBarHomeButtonStateManager:(id)a0 didChangeToDisplayState:(unsigned long long)a1;
- (void)updateAppearanceForWallpaper;
- (void)workspace:(id)a0 stateDidChangeFromState:(id)a1 toState:(id)a2;

@end
