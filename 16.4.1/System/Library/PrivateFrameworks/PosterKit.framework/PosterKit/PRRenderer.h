@class NSMutableDictionary, UIWindowScene, FBScene, CSProminentDisplayViewController, BSCompoundAssertion, UIView, PRPosterPreferencesImpl, NSString, PRPosterEnvironmentImpl, UIScene, UIViewFloatAnimatableProperty, RBSAssertion, PRRenderingBackdropView;
@protocol PRInvalidatable, PRRenderingDelegate;

@interface PRRenderer : NSObject <FBSceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction, PRRenderingBackdropViewOwner, UISceneDelegate> {
    UIWindowScene *_scene;
    id<PRRenderingDelegate> _delegate;
    BOOL _disconnected;
    NSMutableDictionary *_viewsByLevel;
    BSCompoundAssertion *_sessionExtensions;
    RBSAssertion *_assertion;
    BOOL _assertionValid;
    id<PRInvalidatable> _wakeToken;
    id<PRInvalidatable> _unlockToken;
    PRRenderingBackdropView *_backdropView;
    FBScene *_graphicComplicationScene;
    BOOL _graphicComplicationsRendered;
    FBScene *_inlineComplicationScene;
    BOOL _inlineComplicationRendered;
    UIViewFloatAnimatableProperty *_unlockAnimator;
    BOOL _animatingUnlock;
    BOOL _interruptedUnlock;
}

@property (retain, nonatomic) CSProminentDisplayViewController *timePreviewProminentDisplayViewController;
@property (retain, nonatomic) CSProminentDisplayViewController *complicationsPreviewProminentDisplayViewController;
@property (readonly, nonatomic) PRPosterEnvironmentImpl *environment;
@property (readonly, nonatomic) PRPosterPreferencesImpl *preferences;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *foregroundView;
@property (readonly, nonatomic) UIView *floatingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (id)initWithScene:(id)a0;
- (void)updatePreferences:(id /* block */)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (id)_settingsDiffActionsForScene:(id)a0;
- (void)_performActionsForUIScene:(id)a0 withUpdatedFBSScene:(id)a1 settingsDiff:(id)a2 fromSettings:(id)a3 transitionContext:(id)a4 lifecycleActionType:(unsigned int)a5;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void)sceneDidBecomeActive:(id)a0;
- (void)sceneWillEnterForeground:(id)a0;
- (void)updatedValuesForView:(id)a0;
- (void)noteContentSignificantlyChanged;
- (id)initWithDelegate:(id)a0;
- (void)sceneWillResignActive:(id)a0;
- (void)sceneDidEnterBackground:(id)a0;
- (void)invalidateView:(id)a0;
- (id)extendRenderSessionForReason:(id)a0;
- (void).cxx_destruct;
- (void)sceneDidDisconnect:(id)a0;

@end
