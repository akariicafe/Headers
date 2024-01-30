@class AKAppleIDAuthenticationContext, PKCloudStoreService;

@interface PKSecurityCapabilitiesController : NSObject {
    AKAppleIDAuthenticationContext *_authContext;
    PKCloudStoreService *_cloudService;
}

@property (readonly, nonatomic) unsigned long long feature;
@property (readonly, nonatomic) unsigned long long securityRequirements;
@property (readonly, nonatomic) long long context;

+ (id)displayableErrorForErrorCode:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_authenticationReason;
- (id)_createAuthContext;
- (id)_genericDisplayableError;
- (void)_isEnabledForSecuirtyRequirements:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (void)_isManateeCapableWithCompletion:(id /* block */)a0;
- (void)_isMissingTLKsWithCompletion:(id /* block */)a0;
- (id)_missingTLKsAlertController;
- (void)_presentDeviceToDeviceEncryptionRepairFlow:(id)a0 completion:(id /* block */)a1;
- (void)_presentManateeSecurityFlowWithPresentingViewController:(id)a0 suppressHSA2Alert:(BOOL)a1 completion:(id /* block */)a2;
- (void)_presentMissingTLKsAlertWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)_presentPasswordPromptWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)_resetApplyPayManateeViewWithCompletion:(id /* block */)a0;
- (id)initWithRequirements:(unsigned long long)a0 context:(long long)a1;
- (id)initWithRequirements:(unsigned long long)a0 feature:(unsigned long long)a1 context:(long long)a2;
- (void)isEnabledForSecuirtyRequirementsWithCompletion:(id /* block */)a0;
- (BOOL)isHSA2Enabled;
- (void)presentSecurityRepairFlowWithPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)presentSecurityRepairFlowWithPresentingViewController:(id)a0 suppressHSA2Alert:(BOOL)a1 completion:(id /* block */)a2;

@end
