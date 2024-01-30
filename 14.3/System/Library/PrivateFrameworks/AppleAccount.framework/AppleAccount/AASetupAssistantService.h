@class NSString, NSOperationQueue, ACAccount, NSDate, AASigningSession;

@interface AASetupAssistantService : NSObject {
    NSOperationQueue *_requesterQueue;
    ACAccount *_account;
    struct OpaqueCFHTTPCookieStorage { } *_cookieStorage;
    AASigningSession *_signingSession;
    NSDate *_signingSessionCreationDate;
}

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *emailChoice;

+ (id)urlConfiguration;
+ (void)resetURLConfiguration;

- (id)init;
- (void).cxx_destruct;
- (void)downloadURLConfiguration:(id /* block */)a0;
- (void)dealloc;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage { } *)a0;
- (void)createAppleIDWithParameters:(id)a0 handlerWithResponse:(id /* block */)a1;
- (void)upgradeiCloudTermsIfNecessaryWithCustomHeaders:(id)a0 handler:(id /* block */)a1;
- (id)initWithAppleID:(id)a0 password:(id)a1;
- (void)authenticateWithHandler:(id /* block */)a0;
- (void)createAppleIDWithParameters:(id)a0 handler:(id /* block */)a1;
- (void)updateAppleIDWithParameters:(id)a0 handler:(id /* block */)a1;
- (void)setupDelegateAccountsWithParameters:(id)a0 handler:(id /* block */)a1;
- (void)loginDelegatesWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)upgradeiCloudTermsIfNecessaryWithHandler:(id /* block */)a0;
- (void)shouldPresentUpgradeFlowWithCompletion:(id /* block */)a0;
- (void)_doHSADeviceProvisioningWithDSID:(id)a0 data:(id)a1;
- (void)_doHSADeviceProvisioningSynchronizationWithDSID:(id)a0 data:(id)a1;
- (void)_doHSADeviceReprovisioningWithDSID:(id)a0;
- (id)_signingSession;
- (id)initWithAccount:(id)a0;

@end
