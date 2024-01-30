@class AALoginPluginManager, AAStorableLoginContext, AASetupAssistantService;

@interface BYAppleIDAccountsManager : NSObject {
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
}

@property (retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService;

+ (id)sharedManager;

- (void)loginDelegateAccountsWithUsername:(id)a0 password:(id)a1 rawPassword:(id)a2 skipiTunes:(BOOL)a3 onlyAppleIDPlugin:(BOOL)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)initForDelegateBundleIDs:(id)a0;
- (id)init;
- (void)repeatedlyAttemptPostRestoreRenewForAccount:(id)a0 loginContext:(id)a1 numberOfAttemptsAllowed:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)attemptPostRestoreRenewForAccount:(id)a0 loginContext:(id)a1 allowFollowUp:(BOOL)a2 completion:(id /* block */)a3;
- (void)clearStoredLoginContext;
- (void)performSilentICDPUpgrade;
- (id)storedLoginContext;
- (void)preloadDefaultLoginParametersWithBundleIDs:(id)a0;
- (void)enableDataClassesForAccount:(id)a0 completion:(id /* block */)a1;
- (void)runPostRestoreRenewCredentialsIfNeeded;

@end
