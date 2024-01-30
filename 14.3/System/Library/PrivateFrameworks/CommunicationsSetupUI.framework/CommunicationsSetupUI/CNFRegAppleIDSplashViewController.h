@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController

@property (retain) CNFRegController *regController;
@property long long serviceType;
@property BOOL showBusyUIOnAppearance;

+ (BOOL)shouldShowSplashViewForService:(id)a0 inProgressRegisteringNonPhoneAccount:(id *)a1;
+ (id)_inProgressRegisteringNonPhoneAccountForService:(id)a0;

- (id)serviceDescription;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)serviceIcon;
- (void)willBeginAuthWithContext:(id)a0;
- (void)handleAuthCompletionWithResults:(id)a0;
- (void)_applicationDidResume:(id)a0;
- (id)serviceName;
- (void)viewWillAppear:(BOOL)a0;
- (id)_imService;
- (void)continueRegisteringAccount:(id)a0;
- (id)_iCloudUserName;
- (void)_handleRegistarResults:(BOOL)a0 alertController:(id)a1;
- (void)_showSettingsController;
- (void)_cnfSignInWithUsername:(id)a0 password:(id)a1;
- (void)_completeIfAccountIsAlreadyRegistered;

@end
