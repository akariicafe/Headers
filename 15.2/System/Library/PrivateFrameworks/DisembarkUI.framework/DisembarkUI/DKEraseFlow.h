@class UINavigationController, NSString, DKConfiguration, NWPathEvaluator, DKNotableUserData, UIViewController;
@protocol DKFindMyProvider, DKPasscodeProvider, BSInvalidatable, DKNotableUserDataProvider, DKWalletProvider, DKCloudProvider;

@interface DKEraseFlow : NSObject <SBSHardwareButtonEventConsuming>

@property (retain, nonatomic) DKConfiguration *configuration;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIViewController *initialViewController;
@property (nonatomic) BOOL skipLocalDataCheck;
@property (nonatomic) BOOL allowExpensiveCellular;
@property (retain, nonatomic) DKNotableUserData *notableUserData;
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (copy, nonatomic) id /* block */ cloudUploadProgressHandler;
@property (copy, nonatomic) id /* block */ cloudUploadCompletion;
@property (nonatomic) float cloudUploadProgress;
@property (nonatomic) double cloudUploadTimeRemaining;
@property (nonatomic) unsigned long long cloudUploadResult;
@property (nonatomic, getter=isCloudUploadInProgress) BOOL cloudUploadInProgress;
@property (nonatomic) BOOL cloudUploadSucceeded;
@property (retain, nonatomic) id<BSInvalidatable> homeButtonConsumer;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ eraseDevice;
@property (copy, nonatomic) id /* block */ hasInternetConnectivity;
@property (copy, nonatomic) id /* block */ isBasebandDead;
@property (copy, nonatomic) id /* block */ presentNetworkSettings;
@property (retain, nonatomic) id<DKFindMyProvider> findMyProvider;
@property (retain, nonatomic) id<DKNotableUserDataProvider> notableUserDataProvider;
@property (retain, nonatomic) id<DKPasscodeProvider> passcodeProvider;
@property (retain, nonatomic) id<DKCloudProvider> cloudProvider;
@property (retain, nonatomic) id<DKWalletProvider> walletProvider;
@property (retain, nonatomic) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stringForState:(unsigned long long)a0;

- (id)startFlow;
- (unsigned long long)state;
- (id)initWithConfiguration:(id)a0;
- (id)initWithNavigationController:(id)a0;
- (void).cxx_destruct;
- (void)consumeAnyPressEventForButtonKind:(long long)a0;
- (id)initWithNavigationController:(id)a0 configuration:(id)a1;
- (void)prepareFlow:(id /* block */)a0;
- (void)showFlowContainerFromParentViewController:(id)a0 completion:(id /* block */)a1;
- (void)_startNonInteractiveCloudUpload;
- (void)_supportsNonInteractiveCloudUpload:(id /* block */)a0;
- (void)_startFlow;
- (void)_hostWillTerminate;
- (void)_unregisterForAnalyticsNotifications;
- (void)_sendTerminatedAnalyticsEventWithState:(unsigned long long)a0 willErase:(BOOL)a1 reason:(id)a2;
- (void)_registerForAnalyticsNotifications;
- (void)_advanceToState:(unsigned long long)a0;
- (void)_endFlow;
- (void)_allowHomeButton;
- (Class)_viewControllerClassForState:(unsigned long long)a0;
- (void)_nextStateFromState:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)_isHomeButtonAllowedForState:(unsigned long long)a0;
- (void)_disallowHomeButton;
- (id)_viewControllerForState:(unsigned long long)a0;
- (void)_eraseDevice;
- (void)_advanceFromState:(unsigned long long)a0;
- (void)_endFlowWithReason:(id)a0;
- (void)_endFlowForCancellationWithReason:(id)a0;
- (BOOL)_requiresCellularPlanConfirmation;
- (void)_presentEraseCellularPlanConfirmation:(id /* block */)a0;
- (void)_presentEraseConfirmation:(id /* block */)a0;
- (id)initForSetupAssistant;

@end
