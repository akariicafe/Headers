@class FBSceneManager, NSString, SBApplication, FBScene, FBSDisplayConfiguration, SBSceneHostingDisplayController, SBApplicationController, FBSDisplayLayoutElement, FBSDisplayIdentity, SBWindowScene;
@protocol BSInvalidatable, FBSDisplayLayoutPublishing;

@interface SBNonInteractiveDisplayControllerPolicy : NSObject <FBSceneObserver, SBSceneLayoutChildTransactionProviding, SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneHostingDisplayControllerPolicy> {
    SBSceneHostingDisplayController *_displayController;
    FBSDisplayIdentity *_displayIdentity;
    FBSceneManager *_fbSceneManager;
    SBWindowScene *_monitoredWindowScene;
    SBApplicationController *_applicationController;
    id<FBSDisplayLayoutPublishing> _layoutPublisher;
    FBSDisplayLayoutElement *_currentLayoutElement;
    id<BSInvalidatable> _currentLayoutElementAssertion;
    unsigned long long _previouslyReceivedDeactivationReasons;
    SBApplication *_currentApplication;
    FBScene *_currentScene;
    FBSDisplayConfiguration *_lastPresentationUpdateDisplayConfiguration;
    FBScene *_lastPresentationUpdateScene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previousLayoutStateForApplicationTransitionContext:(id)a0;
- (id)layoutStateForApplicationTransitionContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })applicationTransitionContext:(id)a0 frameForApplicationSceneEntity:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (id)childTransactionsForTransitionRequest:(id)a0;
- (void)dealloc;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_fetchOrCreateSceneForApplication:(id)a0 monitoredDisplayScene:(id)a1 fromSceneManager:(id)a2 displayConfiguration:(id)a3 deactivationReasons:(unsigned long long)a4;
- (id)assertionPreferencesForDisplay:(id)a0 displayConfiguration:(id)a1;
- (void)connectToDisplayController:(id)a0 displayConfiguration:(id)a1;
- (unsigned long long)displayAssertionDeactivationReasons:(id)a0;
- (unsigned long long)displayAssertionPriorityLevel:(id)a0;
- (void)displayController:(id)a0 didBeginTransaction:(id)a1 sceneManager:(id)a2 displayConfiguration:(id)a3 deactivationReasons:(unsigned long long)a4;
- (void)displayController:(id)a0 didGainControlOfDisplayWithSceneManager:(id)a1;
- (void)displayController:(id)a0 sceneManager:(id)a1 didLoseControlOfDisplayWithDeactivationReasons:(unsigned long long)a2;
- (void)displayController:(id)a0 sceneManager:(id)a1 didReceiveNewDeactivationReasons:(unsigned long long)a2;
- (BOOL)displayController:(id)a0 shouldUpdatePresentationWithSceneManager:(id)a1 displayConfiguration:(id)a2;
- (void)displayController:(id)a0 updatePresentationWithSceneManager:(id)a1 displayConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)displayControllerDidDisconnect:(id)a0 transaction:(id)a1 sceneManager:(id)a2;
- (void)displayControllerWillDisconnect:(id)a0 sceneManager:(id)a1;
- (id)displayPreferencesForDisplayController:(id)a0;
- (id)initWithFBSceneManager:(id)a0 monitoredWindowScene:(id)a1 applicationController:(id)a2;

@end
