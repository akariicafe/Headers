@class AFUISceneConfiguration, NSString, UIView, AFUISceneController, FBScene;
@protocol UIScenePresenter, BSInvalidatable;

@interface AFUISceneHostingViewController : UIViewController <AFUISceneControllerDelegate>

@property (retain, nonatomic) AFUISceneController *sceneController;
@property (retain, nonatomic) UIView *windowSceneHostingView;
@property (retain, nonatomic) id<UIScenePresenter> presentation;
@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) id<BSInvalidatable> predicateInvalidationHandler;
@property (nonatomic) BOOL pauseDeferrals;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentFrame;
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

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)isSceneActive;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_hasScene;
- (void)deactivateScene;
- (void)_updateDeferralChainWithWindow:(id)a0;
- (void)reactivateScene;
- (void)startDeferringHIDEventsIfNeeded;
- (void)_audioCategoriesDisablingVolumeHUDDidChangeTo:(id)a0;
- (void)_handleInvalidationForReason:(unsigned long long)a0 explanation:(id)a1;
- (void)_handleSceneDidActivateWithIdentifier:(id)a0;
- (BOOL)_shouldDeferHIDEventsForMode;
- (void)_transitionContentsWithView:(id)a0 forContentState:(long long)a1;
- (void)_updateSceneSettingsToSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 withAnimationSettings:(id)a2 animationFence:(id)a3;
- (void)_updateSceneUIApplicationSceneSettingsWithBlock:(id /* block */)a0;
- (void)invalidateAndPauseDeferringHIDEvents;
- (void)invalidateSceneForReason:(unsigned long long)a0 explanation:(id)a1;
- (BOOL)isDeferringHIDEvents;
- (BOOL)isHostingScene;
- (id)sceneConfigurationForDelegate;
- (void)sceneController:(id)a0 sceneContentStateDidChange:(id)a1;
- (void)sceneController:(id)a0 sceneDidUpdateClientSettings:(id)a1;
- (void)sceneController:(id)a0 sceneWasInvalidated:(id)a1 forReason:(unsigned long long)a2;
- (void)startHostingSceneForConfiguration:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)stopHostingScene;
- (void)updateRemoteSceneWithFrontMostAppInterfaceOrientation:(long long)a0;
- (void)updateSceneDeactivationReasonMask:(unsigned long long)a0;
- (void)updateSceneWithConfiguration:(id)a0;

@end
