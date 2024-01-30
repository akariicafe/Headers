@class NSString, TFBetaAppLaunchScreenView, TFBetaAppLaunchPresenter, UIBarButtonItem;
@protocol TFBetaAppLaunchScreenHost;

@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView>

@property (readonly, nonatomic) TFBetaAppLaunchPresenter *presenter;
@property (retain, nonatomic) TFBetaAppLaunchScreenView *launchScreenView;
@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem;
@property (weak, nonatomic) id<TFBetaAppLaunchScreenHost> launchScreenHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)_currentInterfaceOrientation;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithPresenter:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showLoadingAnimated:(BOOL)a0;
- (void)showTestNotesWithTitle:(id)a0 lockup:(id)a1 testNotesTitle:(id)a2 testNotesText:(id)a3 primaryButtonTitle:(id)a4 primaryButtonEvent:(unsigned long long)a5 animated:(BOOL)a6 fetchingOnImageFetcher:(id)a7;
- (void)showHowToWithTitle:(id)a0 subtitle:(id)a1 imageIdentifier:(id)a2 primaryButtonTitle:(id)a3 primaryButtonEvent:(unsigned long long)a4 secondaryButtonTitle:(id)a5 secondaryButtonEvent:(unsigned long long)a6 animated:(BOOL)a7;
- (void)_didPressNavigationItemCancel;
- (void)_updateForContainmentInHostEnvironment:(id)a0;
- (void)_updateNavigationBarForHostTraitCollection:(id)a0;
- (id)_fadeTransition;
- (void)_animateLaunchScreenViewWithUpdateBlock:(id /* block */)a0 transition:(id)a1;
- (SEL)_selectorForPresentorViewEvent:(unsigned long long)a0;
- (id)_pushTransition;
- (void)_didPressShowHowToButton;
- (void)_didPressOpenHowToSupportLinkButton;
- (void)_didPressExitLaunchScreenButton;
- (void)launchScreenHost:(id)a0 traitCollectionDidChange:(id)a1;

@end
