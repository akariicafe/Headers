@protocol CDPDSecureBackupProxy, CDPDAuthProviderInternal, CDPAppleAccountProxy;

@interface CDPInternalDataPrivacyController : NSObject

@property (retain, nonatomic) id<CDPDAuthProviderInternal> authKitInterface;
@property (retain, nonatomic) id<CDPAppleAccountProxy> appleAccountInterface;
@property (retain, nonatomic) id<CDPDSecureBackupProxy> securityInterface;

- (void)updateDataPrivacyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)statusForDataPrivacyWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_shouldContinueAfterRecoveryOptionsCheckWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_deviceCheckForDataPrivacyDidCompleteWithContext:(id)a0 devicesLosingAccountAccess:(id)a1 deviceListFetchError:(id)a2 finalCompletion:(id /* block */)a3;
- (void)_didEnableDataPrivacyOnAuthKitWithContext:(id)a0 enableError:(id)a1 finalCompletion:(id /* block */)a2;
- (void)_didEnableDataPrivacyOnSecurityWithContext:(id)a0 enableError:(id)a1 finalCompletion:(id /* block */)a2;
- (void)_didFinishCheckingForRecoveryOptionsWithContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)_shouldContinueAfterPrimaryAccountCheckWithContext:(id)a0 completion:(id /* block */)a1;
- (void)disableDataPrivacyWithCompletion:(id /* block */)a0;
- (void)enableDataPrivacyWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithAuthKitInterface:(id)a0 appleAccountInterface:(id)a1 securityInterface:(id)a2;

@end
