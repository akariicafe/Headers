@class AFUISceneConfiguration, NSString, FBSceneClientProviderInvalidationAction, UIView, AFUISceneController, FBScene;
@protocol UIScenePresenter, BSInvalidatable;

@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate>

@property (retain, nonatomic) AFUISceneController *sceneController;
@property (retain, nonatomic) UIView *windowSceneHostingView;
@property (retain, nonatomic) id<UIScenePresenter> presentation;
@property (retain, nonatomic) FBSceneClientProviderInvalidationAction *invalidationAction;
@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) id<BSInvalidatable> predicateInvalidationHandler;
@property (nonatomic) BOOL pauseDeferrals;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) BOOL safeAreaInsetsAreSuspended;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } effectiveSafeAreaInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } suspendedSafeAreaInsets;
@property (readonly, nonatomic) long long deferralMode;
@property (readonly, nonatomic) AFUISceneConfiguration *configuration;
@property (nonatomic, getter=isInFluidDismissal) BOOL inFluidDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)a0;
- (void)_transitionContentsWithView:(id)a0 forContentState:(long long)a1;
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)a0;
- (void)stopHostingScene;
- (void)invalidateSceneForReason:(unsigned long long)a0 explanation:(id)a1;
- (void)_updateDeferralChainWithWindow:(id)a0;
- (void)_updateSceneUIApplicationSceneSettingsWithBlock:(id /* block */)a0;
- (void)_updateSceneSafeAreaInsets;
- (void)updateSceneWithConfiguration:(id)a0;
- (BOOL)_shouldDeferHIDEventsForMode;
- (void)_handleSceneDidActivateWithIdentifier:(id)a0;
- (void)_handleInvalidationForReason:(unsigned long long)a0 explanation:(id)a1;
- (id)sceneConfigurationForDelegate;
- (void)sceneController:(id)a0 sceneContentStateDidChange:(id)a1;
- (void)sceneController:(id)a0 sceneWasInvalidated:(id)a1 forReason:(unsigned long long)a2;
- (void)sceneController:(id)a0 sceneDidUpdateClientSettings:(id)a1;
- (void)updateSettingsForInterfaceOrientationChange:(long long)a0 willAnimationWithDuration:(double)a1;
- (void)startHostingSceneForConfiguration:(id)a0 withCompletionBlock:(id /* block */)a1;
- (BOOL)isHostingScene;
- (BOOL)isDeferringHIDEvents;
- (void)startDeferringHIDEventsIfNeeded;
- (void)invalidateAndPauseDeferringHIDEvents;
- (void)deactivateSceneForExtendingTTSInBackground;
- (BOOL)_hasScene;

@end
