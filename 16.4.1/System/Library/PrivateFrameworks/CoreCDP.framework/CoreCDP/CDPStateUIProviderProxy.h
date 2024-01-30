@protocol CDPStateUIProvider;

@interface CDPStateUIProviderProxy : NSObject <CDPStateUIProviderInternal>

@property (retain, nonatomic) id<CDPStateUIProvider> uiProvider;

- (void).cxx_destruct;
- (void)cdpContext:(id)a0 presentRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithHandler:(id)a1;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithSecretValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpContext:(id)a0 showError:(id)a1 withCompletion:(id /* block */)a2;
- (void)cdpContext:(id)a0 showError:(id)a1 withDefaultIndex:(long long)a2 withCompletion:(id /* block */)a3;
- (void)cdpContext:(id)a0 showResetCompletedAlertWithCompletion:(id /* block */)a1;
- (void)cdpRecoveryFlowContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 validator:(id)a2;
- (void)cdpContext:(id)a0 beginRemoteApprovalWithValidator:(id)a1 completion:(id /* block */)a2;
- (id)initWithUIProvider:(id)a0;

@end
