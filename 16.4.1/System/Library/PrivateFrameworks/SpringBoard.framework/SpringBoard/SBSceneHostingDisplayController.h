@class FBSDisplayConfiguration, FBWorkspaceEventQueue, CADisplay, NSObject, SBDisplayManager, NSMutableArray, BSAtomicSignal, SBDisplayAssertion, NSString, SBDisplayAssertionPreferences, _UIRootWindow, SBSceneManager, FBSDisplayIdentity;
@protocol FBSDisplayLayoutPublishing, BSInvalidatable, SBSceneHostingDisplayControllerPolicy, OS_dispatch_queue;

@interface SBSceneHostingDisplayController : NSObject <SBDisplayControlling> {
    FBSDisplayIdentity *_displayIdentity;
    SBDisplayManager *_displayManager;
    id<SBSceneHostingDisplayControllerPolicy> _policy;
    id<BSInvalidatable> _stateCaptureAssertion;
    FBWorkspaceEventQueue *_workspaceEventQueue;
    NSMutableArray *_pendingWork;
    BSAtomicSignal *_updateTransactionInvalidator;
    BOOL _hasEnqueuedPresentationUpdate;
    SBSceneManager *_sceneManager;
    BSAtomicSignal *_readyToTransformDisplaysSignal;
    BOOL _connectionCompleted;
    _UIRootWindow *_blankingWindow;
    SBDisplayAssertion *_displayAssertion;
    SBDisplayAssertionPreferences *_currentDisplayAssertionPreferences;
    unsigned long long _currentDeactivationReasons;
    CADisplay *_caDisplay;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    id<FBSDisplayLayoutPublishing> _layoutPublisher;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_presentedConfiguration;
    BSAtomicSignal *_presentationUpdateInvalidationSignal;
    BSAtomicSignal *_displayDisconnectedSignal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isConnected;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)displayAssertion:(id)a0 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)a1;
- (id)layoutPublisher;
- (id)_createBlankingWindowWithConfiguration:(id)a0;
- (id)_createDisplayAssertionPreferences;
- (id)_createPresentationBinderWithConfiguration:(id)a0;
- (id)_createUpdateTransactionWithLabel:(id)a0;
- (void)_enqueueEvaluateAndApplyPresentationUpdate;
- (void)_ensureCADisplayUpToDate:(id)a0 completion:(id /* block */)a1;
- (void)_runRootTransaction:(id)a0 withLabel:(id)a1 completion:(id /* block */)a2;
- (void)_runRootUpdateTransactionWithLabel:(id)a0 completion:(id /* block */)a1;
- (void)_sendBlankingWindowToFront:(BOOL)a0;
- (void)_updateBlankingWindowIfNecessary;
- (void)_updateLayoutPublisherIfNecessary;
- (void)_updatePolicyForPresentation:(id /* block */)a0;
- (void)_updatePresentationBinderIfNecessary;
- (void)connectToDisplayIdentity:(id)a0 configuration:(id)a1 displayManager:(id)a2 sceneManager:(id)a3 caDisplayQueue:(id)a4 assertion:(id)a5;
- (id)createTransactionForTransitionRequest:(id)a0;
- (void)displayAssertion:(id)a0 didReceiveNewDeactivationReasons:(unsigned long long)a1;
- (void)displayAssertionDidGainControlOfDisplay:(id)a0;
- (void)displayIdentityDidDisconnect:(id)a0;
- (void)displayIdentityDidUpdate:(id)a0 configuration:(id)a1;
- (id)initWithWorkspaceEventQueue:(id)a0 policy:(id)a1;
- (void)requestUpdate:(unsigned long long)a0;
- (id)signpostDescription;
- (void)transformDisplayConfiguration:(id)a0 withBuilder:(id)a1;

@end
