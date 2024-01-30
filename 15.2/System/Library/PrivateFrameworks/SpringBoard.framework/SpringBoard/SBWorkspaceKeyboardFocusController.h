@class FBSceneManager, NSString, SBSceneManager, FBScene, _SBKeyboardFocusPolicy, FBSSceneIdentityToken, BKSHIDEventDeferringTarget, UIWindow, _SBRecentlyUsedSceneIdentityCache, BSCompoundAssertion, SBSceneManagerCoordinator, SBMainWorkspace;
@protocol BSInvalidatable, _UIKeyboardArbiterAdvisor;

@interface SBWorkspaceKeyboardFocusController : NSObject <_UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, _UIEventDeferringSystemShellBehaviorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _SBKeyboardFocusPolicy *_lock_effectivePolicy;
    FBSSceneIdentityToken *_lock_springBoardLayoutSceneIdentityToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _arbiterLock;
    id<_UIKeyboardArbiterAdvisor> _arbiterLock_keyboardArbiterAdvisor;
    SBMainWorkspace *_workspace;
    SBSceneManagerCoordinator *_sceneCoordinator;
    SBSceneManager *_mainDisplaySceneManager;
    FBSceneManager *_frontBoardSceneManager;
    BSCompoundAssertion *_observers;
    BSCompoundAssertion *_appFocusRedirections;
    BSCompoundAssertion *_springBoardFocusRedirections;
    BSCompoundAssertion *_springBoardFocusLockAssertions;
    BSCompoundAssertion *_preventFocusForSceneAssertion;
    id<BSInvalidatable> _rootSceneKeyboardFocusRule;
    id<BSInvalidatable> _localToRemoteKeyboardFocusRule;
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    BKSHIDEventDeferringTarget *_sentKeyboardFocusTarget;
    FBScene *_targetSceneForKeyboardFocusDeferring;
    UIWindow *_sentKeyboardFocusPredicateWindow;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
}

@property (nonatomic) unsigned long long userFocusRequestGeneration;
@property (readonly, nonatomic) FBScene *externalSceneWithFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)preventFocusForSceneWithIdentityToken:(id)a0 reason:(id)a1;
- (id)initWithWorkspace:(id)a0;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (id)redirectFocusForReason:(id)a0 fromProcessIdentifier:(int)a1 fromDeferringToken:(id)a2 toProcessidentifier:(int)a3 toDeferringToken:(id)a4;
- (void)userFocusRequestForScene:(id)a0 reason:(id)a1;
- (BOOL)eventDeferringManagerSystemShellBehavior:(id)a0 shouldSuppressRemoteRuleForOwningElement:(id)a1 inEnvironment:(id)a2;
- (void)_updateAccessibilityDeferringRulesUnderstandingSpringBoardIsForeground:(BOOL)a0;
- (id)lockFocusToSpringBoardForReason:(id)a0;
- (id)keyboardArbiterAdvisor:(id)a0 requestedSceneFocusDeliberationForFocusedPid:(int)a1;
- (int)presentingKeyboardProcessIdentifier;
- (BOOL)_setKeyboardFocusPolicy:(id)a0;
- (id)redirectSpringBoardLockFocusForReason:(id)a0 toProcessidentifier:(int)a1 toDeferringToken:(id)a2;
- (BOOL)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;
- (void).cxx_destruct;
- (void)updateKeyboardFocusDeferringRules;
- (id)init;
- (void)_reevaluatePolicyAndUpdateRulesFromKeyWindowNotification;
- (id)addKeyboardFocusObserver:(id)a0;
- (id)_initWithWorkspace:(id)a0 sceneCoordinator:(id)a1 mainDisplaySceneManager:(id)a2 frontBoardSceneManager:(id)a3 installUIKitDependencies:(BOOL)a4 initializeKeyboardArbiter:(BOOL)a5 defaultSpringBoardLayoutSceneIdentityToken:(id)a6;
- (id)_filterFocusedSceneIdentityToken:(id)a0 focusedPID:(int)a1 resultBlock:(id /* block */)a2;

@end
