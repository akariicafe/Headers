@class _UIBackdropView, NSString, CNFRegController;
@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate> {
    long long _serviceType;
    id _resignListener;
    id _resumeListener;
    struct { unsigned char automaticKeyboardWasDisabled : 1; unsigned char shouldListenForSuspension : 1; unsigned char canStartNested : 1; unsigned char canShowSplashScreen : 1; unsigned char canShowDisabledScreen : 1; unsigned char hideLearnMoreButton : 1; unsigned char showSplashOnSignin : 1; unsigned char skipReloadOnNextViewWillAppear : 1; unsigned char allowCancel : 1; unsigned char allowSMS : 1; unsigned char shouldTerminateInBackground : 1; } _wizardFlags;
}

@property (retain, nonatomic) CNFRegController *regController;
@property (nonatomic) BOOL shouldListenForSuspension;
@property (nonatomic) BOOL shouldTerminateInBackground;
@property (nonatomic) id<CNFRegWizardControllerDelegate> firstRunDelegate;
@property (nonatomic) BOOL canStartNested;
@property (nonatomic) BOOL canShowSplashScreen;
@property (nonatomic) BOOL canShowDisabledScreen;
@property (nonatomic) BOOL allowCancel;
@property (nonatomic) BOOL allowSMS;
@property (nonatomic) BOOL hideLearnMoreButton;
@property (nonatomic) BOOL showSplashOnSignin;
@property (retain, nonatomic) _UIBackdropView *backdropView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setGlobalAppearanceStyle:(long long)a0;
+ (void)setSupportsAutoRotation:(BOOL)a0;

- (void)_applicationDidEnterBackground;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setupController;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)popViewControllerWithTransition:(int)a0;
- (void)applicationDidResume;
- (void)viewWillAppear:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)applicationWillSuspend;
- (void)pushViewController:(id)a0 transition:(int)a1;
- (id)initWithServiceTypes:(long long)a0;
- (void)_applicationDidFinishLaunching;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (id)initWithRegController:(id)a0;
- (void)firstRunController:(id)a0 finishedWithState:(unsigned long long)a1;
- (void)_restrictionsChanged;
- (void)_stopListeningForResignResume;
- (BOOL)shouldShowFirstRunController;
- (BOOL)shouldTerminateInBackground;
- (void)setShouldTerminateInBackground:(BOOL)a0;
- (int)_firstRunState:(id)a0;
- (BOOL)canShowDisabledScreen;
- (id)controllerClassesToShow:(BOOL)a0;
- (void)setHideLearnMoreButton:(BOOL)a0;
- (void)_doCancel;
- (id)controllersToShow:(BOOL)a0;
- (void)_updateNavigationBarTitle;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_startListeningForResignResume;
- (void)_checkRestrictions;
- (void)dismissFinished:(BOOL)a0;
- (void)dismissWithState:(unsigned long long)a0;
- (id)controllersToShow;
- (void)setCanShowDisabledScreen:(BOOL)a0;
- (BOOL)skipReloadOnNextViewWillAppear;
- (void)setSkipReloadOnNextViewWillAppear:(BOOL)a0;
- (BOOL)shouldListenForSuspension;
- (void)setShouldListenForSuspension:(BOOL)a0;
- (BOOL)hideLearnMoreButton;

@end
