@class SBWindowScene, SBMainWorkspace, BKSHIDEventDeferringPredicate, NSMutableArray, NSString, _SBRecentlyUsedSceneIdentityCache, FBSScene, NSMutableDictionary, FBSSceneIdentityToken, NSSet, _SBKeyboardFocusPolicy, BKSHIDEventDeferringTarget, BSCompoundAssertion, SBExternalDisplaySettings, SBWindowSceneManager, FBSceneManager, FBScene, SBInputUISceneController, NSMapTable, UIWindow, SBSceneManagerCoordinator;
@protocol BSInvalidatable, _UIKeyboardArbiterAdvisor;

@interface SBWorkspaceKeyboardFocusController : NSObject <_UIKeyboardArbiterOmniscientDelegate, SBSceneManagerObserver, SBMultiDisplayUserInteractionCoordinatorActiveWindowSceneObserver, PTSettingsKeyObserver, _UIEventDeferringSystemShellBehaviorDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _SBKeyboardFocusPolicy *_lock_effectivePolicy;
    FBSSceneIdentityToken *_lock_springBoardLayoutSceneIdentityToken;
    BKSHIDEventDeferringPredicate *_lock_rootSceneKeyboardFocusPredicate;
    BOOL _lock_overlayUIRequestingFocus;
    SBInputUISceneController *_inputUISceneController;
    SBWindowSceneManager *_windowSceneManager;
    SBExternalDisplaySettings *_externalDisplaySettings;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _arbiterLock;
    id<_UIKeyboardArbiterAdvisor> _arbiterLock_keyboardArbiterAdvisor;
    BOOL _addingSpringBoardPreferredFocusWindowScene;
    BOOL _focusServiceEventDeferralRequestsUpdated;
    SBMainWorkspace *_workspace;
    SBSceneManagerCoordinator *_sceneCoordinator;
    FBSceneManager *_frontBoardSceneManager;
    BSCompoundAssertion *_observers;
    BSCompoundAssertion *_appFocusRedirections;
    BSCompoundAssertion *_springBoardFocusRedirections;
    BSCompoundAssertion *_springBoardFocusLockAssertions;
    NSMapTable *_windowSceneForSpringBoardFocusLockReasonMap;
    BSCompoundAssertion *_springBoardWindowFocusStealingAssertions;
    BSCompoundAssertion *_preventFocusForSceneAssertion;
    BSCompoundAssertion *_suppressKeyboardFocusEvaluationAssertion;
    id<BSInvalidatable> _rootSceneKeyboardFocusRule;
    id<BSInvalidatable> _rootSceneSystemKeyCommandOverlayFocusRule;
    id<BSInvalidatable> _localToRemoteKeyboardFocusRule;
    NSMutableArray *_focusServiceRequestedKeyboardFocusRules;
    NSMutableDictionary *_focusServiceEventDeferralRequests;
    NSMutableArray *_userFocusRequestRuleUpdateCompletionHandlers;
    FBScene *_highPrioritySceneToFocusInNextPolicyUpdate;
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    FBScene *_lastAcceptedArbiterSceneSuggestion;
    BKSHIDEventDeferringTarget *_sentKeyboardFocusTarget;
    FBSScene *_targetSceneForRootKeyboardFocusRule;
    FBScene *_targetSceneForKeyboardFocusDeferring;
    UIWindow *_sentKeyboardFocusPredicateWindow;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
    unsigned long long _eventBufferingRequestGeneration;
}

@property (nonatomic) BOOL handlingFocusLockAssertionStateChange;
@property (copy) NSSet *externalSceneIdentities;
@property (nonatomic) unsigned long long userFocusRequestGeneration;
@property (readonly, nonatomic) FBScene *externalSceneWithFocus;
@property (readonly, nonatomic) FBScene *sceneWithFocusIncludingSpringBoard;
@property (readonly, nonatomic) SBWindowScene *windowSceneWithFocus;
@property (readonly, nonatomic) SBInputUISceneController *inputUISceneController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)windowSceneDidDisconnect:(id)a0;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (id)_filterFocusedSceneIdentityToken:(id)a0 focusedPID:(int)a1 resultBlock:(id /* block */)a2;
- (id)lockFocusToSpringBoardWindowScene:(id)a0 forReason:(id)a1;
- (void)windowSceneDidConnect:(id)a0;
- (id)deferAdditionalEnvironments:(id)a0 whenSceneTargetHasKeyboardFocus:(id)a1;
- (void)_updateAccessibilityDeferringRulesUnderstandingSpringBoardIsForeground:(BOOL)a0;
- (id)keyboardArbiterAdvisor:(id)a0 requestedSceneFocusDeliberationForFocusedPid:(int)a1;
- (id)addKeyboardFocusObserver:(id)a0;
- (id)bufferEventsForSpringBoardScene:(id)a0 reason:(id)a1;
- (void)multiDisplayUserInteractionCoordinator:(id)a0 updatedActiveWindowScene:(id)a1;
- (id)preventFocusForSceneWithIdentityToken:(id)a0 reason:(id)a1;
- (void)explainWhyYouAreFocusingAnInvalidatedScene;
- (BOOL)eventDeferringManagerSystemShellBehaviorWantsLocalCompatibilityRules;
- (id)_initWithWorkspace:(id)a0 sceneCoordinator:(id)a1 frontBoardSceneManager:(id)a2 windowSceneManager:(id)a3 installUIKitDependencies:(BOOL)a4 initializeKeyboardArbiter:(BOOL)a5 defaultSpringBoardLayoutSceneIdentityToken:(id)a6;
- (id)initWithWorkspace:(id)a0 windowSceneManager:(id)a1;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)removeKeyboardFocusFromScene:(id)a0;
- (id)redirectFocusForReason:(id)a0 fromProcessIdentifier:(int)a1 fromDeferringToken:(id)a2 toProcessidentifier:(int)a3 toDeferringToken:(id)a4;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (BOOL)shouldAllowInteractionTrackingKeyboardFocusUpdateForWindow:(id)a0;
- (void)sceneManager:(id)a0 willRemoveExternalForegroundApplicationSceneHandle:(id)a1 withReason:(long long)a2;
- (void)updateKeyboardFocusDeferringRules;
- (id)redirectSpringBoardLockFocusForReason:(id)a0 toProcessidentifier:(int)a1 toDeferringToken:(id)a2;
- (int)presentingKeyboardProcessIdentifier;
- (void)_reevaluatePolicyAndUpdateRulesFromKeyWindowNotification;
- (BOOL)_setKeyboardFocusPolicy:(id)a0;
- (id)suppressKeyboardFocusEvaluationForReason:(id)a0;
- (id)init;
- (id)requestFocusStealingForSpringBoardWindow:(id)a0 forReason:(id)a1;
- (BOOL)eventDeferringManagerSystemShellBehavior:(id)a0 shouldSuppressRemoteRuleForOwningElement:(id)a1 inEnvironment:(id)a2;
- (void)userFocusRequestForScene:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldKeyboardBeWindowSizedForHostWithIdentity:(id)a0;
- (void).cxx_destruct;

@end
