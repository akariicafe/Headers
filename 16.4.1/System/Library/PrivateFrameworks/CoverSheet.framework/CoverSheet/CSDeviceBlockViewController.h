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
- (long long)presentationPriority;
- (id)view;
- (void)dealloc;
- (void)viewDidLoad;
- (void)aggregateBehavior:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)aggregateAppearance:(id)a0;
- (void).cxx_destruct;
- (id)viewIfLoaded;
- (id)initWithDeviceBlockStatusProvider:(id)a0;
- (void)cancelButtonTapped;
- (BOOL)_isFindMyEnabled;
- (void)handleCancelButtonTapped;
- (void)_cancelPendingActionAfterDelay:(double)a0;
- (void)_attemptErase;
- (void)_attemptToDisableFindMyWithAccount:(id)a0 completion:(id /* block */)a1;
- (void)_disableFindMyInContext:(unsigned long long)a0 withWipeToken:(id)a1 completion:(id /* block */)a2;
- (void)_dismissEraseDeviceViewController;
- (void)_eraseDeviceWithCompletion:(id /* block */)a0;
- (void)_getUserAccountWithCompletion:(id /* block */)a0;
- (void)_handleDeviceLocatorStateDidChange:(id)a0;
- (BOOL)_isFindMyChangingState;
- (id)_obfuscateUsername:(id)a0;
- (void)_performFMIPAuthenticationForContext:(id)a0 account:(id)a1 completion:(id /* block */)a2;
- (void)_presentAuthenticationViewController;
- (void)_presentEraseDeviceViewController;
- (void)_setNetworkMonitorUpdateHandlerWithPath:(id)a0 completion:(id /* block */)a1;
- (void)_setUpNetworkPathMonitor;
- (BOOL)_shouldShowEraseDeviceButton;
- (void)authViewController:(id)a0 didConfirmEraseAfterAuthenticationWithResults:(id)a1;
- (void)authViewControllerDidCancelToEraseDeviceAfterAuthentication:(id)a0;
- (void)handleEmergencyButtonAction;
- (void)handleEraseButtonAction;
- (void)handleEraseButtonTapped;
- (void)handlePrimaryActionForView:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;

@end
