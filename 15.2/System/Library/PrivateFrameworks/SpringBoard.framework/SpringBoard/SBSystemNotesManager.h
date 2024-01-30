@class SBMainWorkspace, SBPIPSceneContentContainerAdapter, SBPIPSceneContentAdapter, BSServiceConnection, SBSystemNotesInteractionManager, NSString, NSMutableSet, SBKeyboardDismissalManager, BSAbsoluteMachTimer, UIApplicationSceneDeactivationManager, SBSystemNotesSettings, FBSSceneSpecification, SBKeyboardSuppressionManager, SBPIPContentViewLayoutSettings, _UIRemoteKeyboards, PTTestRecipe, SBMainDisplaySceneManager, FBSceneManager, SBPIPController, SBSystemPointerInteractionManager, SBSystemNotesPresentationRequestServer, SBApplicationController, SBTransientUIInteractionManager, MCProfileConnection;
@protocol BSInvalidatable;

@interface SBSystemNotesManager : NSObject <SBSystemNotesPresentationRequestServerDelegate, SBSystemNotesInteractionManagerDataSource, SBSystemNotesInteractionManagerDelegate, SBSystemNotesContentViewControllerDelegate, PTSettingsKeyPathObserver, SBSSystemNotesPresentationClientToServerInterface, MCProfileConnectionObserver> {
    FBSSceneSpecification *_sceneSpecification;
    NSString *_launchBundleID;
    SBPIPController *_pipController;
    SBPIPSceneContentAdapter *_sceneContentAdapter;
    SBApplicationController *_applicationController;
    SBMainDisplaySceneManager *_sceneManager;
    FBSceneManager *_fbSceneManager;
    SBSystemNotesPresentationRequestServer *_systemNotesRequestServer;
    PTTestRecipe *_systemNotesTestRecipe;
    SBMainWorkspace *_workspace;
    SBSystemNotesSettings *_pipSettings;
    SBKeyboardSuppressionManager *_keyboardSuppressionManager;
    SBTransientUIInteractionManager *_transientUIInteractionManager;
    SBSystemPointerInteractionManager *_systemPointerInteractionManager;
    SBSystemNotesInteractionManager *_interactionManager;
    SBKeyboardDismissalManager *_keyboardDismissalManager;
    SBPIPContentViewLayoutSettings *_contentViewLayoutSettings;
    _UIRemoteKeyboards *_remoteKeyboards;
    UIApplicationSceneDeactivationManager *_sceneDeactivationManager;
    BSServiceConnection *_presentedConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_connections;
    id<BSInvalidatable> _pegasusWindowLevelAssertion;
    BSAbsoluteMachTimer *_interactionLoggingTimer;
    unsigned long long _interactionRequests;
    MCProfileConnection *_managedProfileConnection;
    SBPIPSceneContentContainerAdapter *_presentedContainerAdapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void).cxx_destruct;
- (oneway void)presentWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (oneway void)activateConfiguration:(id)a0;
- (void)dealloc;
- (void)showOrHideForKeyCommand:(id)a0;
- (id)initWithControllerCoordinator:(id)a0 workspace:(id)a1 sceneManager:(id)a2 remoteKeyboards:(id)a3 fbSceneManager:(id)a4 sceneDeactivationManager:(id)a5 transientUIInteractionManager:(id)a6 systemPointerInteractionManager:(id)a7 keyboardSuppressionManager:(id)a8 keyboardDismissalManager:(id)a9 applicationController:(id)a10 systemGestureManager:(id)a11 idleTimerCoordinator:(id)a12 managedProfileConnection:(id)a13;
- (void)_reloadLaunchBundleID;
- (BOOL)_handleCreateNoteRequestWithMode:(long long)a0 presentationSource:(unsigned long long)a1;
- (void)_setPresentedConnection:(id)a0;
- (long long)_currentPresentationMode;
- (void)_dismissNotesWithReason:(unsigned long long)a0;
- (id)_presentedContainerViewController;
- (BOOL)_handleCreateNoteRequestWithPresentationContext:(id)a0 error:(id *)a1;
- (id)_presentedNotesContentViewController;
- (id)_sceneBundleIdentifierForNewConfiguration;
- (id)_createContentViewControllerForPresentationContext:(id)a0 error:(id *)a1;
- (void)_addContentViewControllerToPIPHierarchy:(id)a0 contentViewLayoutSettings:(id)a1;
- (void)_dismissNotesWithReason:(unsigned long long)a0 animated:(BOOL)a1;
- (id)_sceneHandleForApplication:(id)a0 sceneSpecification:(id)a1;
- (void)_tearDownContainerViewControllerForSceneHandle:(id)a0;
- (id)server:(id)a0 targetForNewClientConnection:(id)a1;
- (void)server:(id)a0 connectionDidInvalidate:(id)a1;
- (id)presentedPIPContentViewControllerForInteractionManager:(id)a0;
- (id)presentedContainerViewControllerForInteractionManager:(id)a0;
- (id)currentContentViewLayoutSettingsForInteractionManager:(id)a0;
- (long long)currentPresentationModeForInteractionManager:(id)a0;
- (id)launchBundleIDForInteractionManager:(id)a0;
- (BOOL)interactionManager:(id)a0 requestsPresentationWithContext:(id)a1;
- (void)interactionManager:(id)a0 requestsUpdatePresentationMode:(long long)a1;
- (void)interactionManager:(id)a0 requestsStartSuppressingKeyboardForReason:(id)a1;
- (void)interactionManager:(id)a0 requestsStopSuppressingKeyboardForReason:(id)a1;
- (void)interactionManager:(id)a0 requestsNotesDismissalForSource:(unsigned long long)a1 animated:(BOOL)a2;
- (id)interactionManager:(id)a0 requestsStashAssertionForReason:(id)a1;
- (void)contentViewControllerDidReceiveTapToExpand:(id)a0;
- (void)contentViewController:(id)a0 didChangeToPresentationMode:(long long)a1;
- (void)contentViewControllerWantsDismissal:(id)a0 forReason:(unsigned long long)a1 animated:(BOOL)a2;

@end
