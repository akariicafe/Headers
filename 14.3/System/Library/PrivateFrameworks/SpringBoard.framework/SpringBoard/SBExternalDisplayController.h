@class FBSDisplayIdentity, NSString, SBMainWorkspace, SBExternalDisplayPresenter, FBSDisplayConfiguration, NSMutableArray, SBMainDisplaySceneManager;
@protocol SBFAuthenticationStatusProvider;

@interface SBExternalDisplayController : NSObject <SBSceneLayoutSlaveTransactionProviding> {
    SBMainWorkspace *_mainWorkspace;
    id<SBFAuthenticationStatusProvider> _userAuthenticationProvider;
    SBMainDisplaySceneManager *_mainDisplaySceneManager;
    SBExternalDisplayPresenter *_presenter;
    FBSDisplayConfiguration *_currentConfiguration;
    BOOL _observingAppState;
    BOOL _hasConnectTransactionRun;
    BOOL _disconnected;
    BOOL _tornDown;
    NSMutableArray *_pendingWork;
}

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithConfiguration:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_appProcessStateDidChange:(id)a0;
- (BOOL)isConnected;
- (id)slaveTransactionsForTransitionRequest:(id)a0;
- (id)initWithMainWorkspace:(id)a0 userAuthenticationProvider:(id)a1 mainDisplaySceneManager:(id)a2 layoutPublisher:(id)a3 displayConfiguration:(id)a4;
- (void)_authenicationStateDidChange:(id)a0;
- (void)_handleDisplayConnectIfPossible;
- (void)_runRootUpdateTransactionWithLabel:(id)a0 completion:(id /* block */)a1;
- (void)_runRootTransaction:(id)a0 withLabel:(id)a1 completion:(id /* block */)a2;
- (id)_createUpdateTransactionWithLabel:(id)a0;
- (id)_expectedForegroundApp;
- (BOOL)_displayConnectShouldWaitForAppRunning:(id)a0;
- (BOOL)_application:(id)a0 canAccessDisplay:(id)a1;
- (BOOL)_shouldConnectDisplayNow:(id)a0;
- (void)disconnectWithCompletion:(id /* block */)a0;

@end
