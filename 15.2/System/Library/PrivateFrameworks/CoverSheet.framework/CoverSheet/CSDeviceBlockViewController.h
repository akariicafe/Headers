@class SBFDeviceBlockTimer, NSString, CSEraseDeviceAuthViewController, CSEraseDeviceViewController, NSObject, ACAccount, CSLockScreenSettings, ACAccountStore;
@protocol OS_nw_path_monitor, OS_dispatch_queue, SBFBlockStatusProvider;

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate, CSDeviceBlockViewDelegate, CSEraseDeviceViewControllerDelegate, CSEraseDeviceAuthViewControllerDelegate> {
    id<SBFBlockStatusProvider> _blockStatusProvider;
    CSEraseDeviceViewController *_eraseDeviceViewController;
    CSEraseDeviceAuthViewController *_authenticationViewController;
    SBFDeviceBlockTimer *_blockTimer;
    CSLockScreenSettings *_lockScreenSettings;
    id /* block */ _pendingAction;
    NSObject<OS_dispatch_queue> *_accountAccessQueue;
    ACAccountStore *_accountStore;
    ACAccount *_findMyAccount;
    BOOL _attemptingErase;
    BOOL _hasActiveInternetConnection;
}

@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkMonitorQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void)_updateText;
- (void)viewDidLoad;
- (long long)presentationPriority;
- (id)view;
- (BOOL)_isFindMyEnabled;
- (void)viewDidDisappear:(BOOL)a0;
- (id)viewIfLoaded;
- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (void)dealloc;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (id)initWithDeviceBlockStatusProvider:(id)a0;
- (void)handleCancelButtonTapped;
- (void)authViewController:(id)a0 didAuthenticateWithResults:(id)a1;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;
- (void)handleEraseButtonTapped;
- (void)handleEraseButtonAction;
- (void)handleEmergencyButtonAction;
- (void)_handleDeviceLocatorStateDidChange:(id)a0;
- (void)_setUpNetworkPathMonitor;
- (void)_attemptErase;
- (BOOL)_shouldShowEraseDeviceButton;
- (void)_presentEraseDeviceViewController;
- (void)_dismissEraseDeviceViewController;
- (void)_presentAuthenticationViewController;
- (id)_obfuscateUsername:(id)a0;
- (BOOL)_isFindMyChangingState;
- (void)_attemptToDisableFindMyWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_getUserAccountWithCompletion:(id /* block */)a0;
- (void)_setNetworkMonitorUpdateHandlerWithPath:(id)a0 completion:(id /* block */)a1;
- (void)_cancelPendingActionAfterDelay:(double)a0;
- (void)_disableFindMyInContext:(unsigned long long)a0 withWipeToken:(id)a1 completion:(id /* block */)a2;
- (void)_performFMIPAuthenticationForContext:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)_eraseDeviceWithCompletion:(id /* block */)a0;

@end
