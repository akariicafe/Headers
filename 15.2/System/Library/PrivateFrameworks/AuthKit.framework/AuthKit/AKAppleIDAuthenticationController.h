@class NSXPCListenerEndpoint, NSSet, NSString, NSXPCConnection, AKAppleIDAuthenticationContextManager, NSLock;
@protocol AKAppleIDAuthenticationDelegate;

@interface AKAppleIDAuthenticationController : NSObject <AKAuthenticationController> {
    NSString *_serviceID;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
    NSXPCConnection *_authenticationServiceConnection;
    AKAppleIDAuthenticationContextManager *_contextManager;
    NSLock *_connectionLock;
}

@property (class, readonly, nonatomic) NSSet *sensitiveAuthenticationKeys;

@property (copy, nonatomic) id /* block */ deallocHandler;
@property (weak, nonatomic) id<AKAppleIDAuthenticationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)authenticateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)getServerUILoadDelegateWithContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)fetchDeviceListWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 daemonXPCEndpoint:(id)a1;
- (id)_authenticationServiceConnection;
- (void)getUserInformationForAltDSID:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)updateUserInformationForAltDSID:(id)a0 userInformation:(id)a1 completion:(id /* block */)a2;
- (void)fetchAuthModeWithContext:(id)a0 completion:(id /* block */)a1;
- (void)fetchDeviceMapWithContext:(id)a0 completion:(id /* block */)a1;
- (void)warmUpVerificationSessionWithCompletion:(id /* block */)a0;
- (void)checkSecurityUpgradeEligibilityForContext:(id)a0 completion:(id /* block */)a1;
- (void)generateLoginCodeWithCompletion:(id /* block */)a0;
- (void)performCircleRequestWithContext:(id)a0 completion:(id /* block */)a1;
- (void)checkInWithAuthenticationServerForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)reportSignOutForAppleID:(id)a0 service:(long long)a1 completion:(id /* block */)a2;
- (void)reportSignOutForAllAppleIDsWithCompletion:(id /* block */)a0;
- (void)updateStateWithExternalAuthenticationResponse:(id)a0 forContext:(id)a1 completion:(id /* block */)a2;
- (void)updateStateWithExternalAuthenticationResponse:(id)a0 forAppleID:(id)a1 completion:(id /* block */)a2;
- (BOOL)isDevicePasscodeProtected:(id *)a0;
- (id)activeLoginCode:(id *)a0;
- (void)getServerUILoadDelegateForAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)synchronizeFollowUpItemsForContext:(id)a0 completion:(id /* block */)a1;
- (void)teardownFollowUpWithContext:(id)a0 completion:(id /* block */)a1;
- (void)renewRecoveryTokenWithContext:(id)a0 completion:(id /* block */)a1;
- (void)validateVettingToken:(id)a0 forAltDSID:(id)a1 completion:(id /* block */)a2;
- (void)isCreateAppleIDAllowedWithCompletion:(id /* block */)a0;
- (void)fetchURLBagForAltDSID:(id)a0 completion:(id /* block */)a1;
- (id)fetchDeviceListWithContext:(id)a0 error:(id *)a1;
- (void)forceURLBagUpdateForAltDSID:(id)a0 urlSwitchData:(id)a1 completion:(id /* block */)a2;
- (id)fetchAuthorizedAppListWithContext:(id)a0 error:(id *)a1;
- (BOOL)deleteAuthorizationDatabase:(id *)a0;
- (BOOL)revokeAuthorizationForApplicationWithClientID:(id)a0 error:(id *)a1;
- (void)validateLoginCode:(unsigned long long)a0 forAppleID:(id)a1 completion:(id /* block */)a2;
- (BOOL)synchronizeFollowUpItemsForContext:(id)a0 error:(id *)a1;
- (void)verifyMasterKey:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)persistMasterKeyVerifier:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)accountNamesForAltDSID:(id)a0;
- (id)_urlBagFromCache:(BOOL)a0 altDSID:(id)a1 withError:(id *)a2;
- (void)setAppleIDWithAltDSID:(id)a0 inUse:(BOOL)a1 forService:(long long)a2;
- (void)dealloc;
- (void)setAppleIDWithDSID:(id)a0 inUse:(BOOL)a1 forService:(long long)a2;
- (void)setConfigurationInfo:(id)a0 forIdentifier:(id)a1 forAltDSID:(id)a2 completion:(id /* block */)a3;
- (void)configurationInfoWithIdentifiers:(id)a0 forAltDSID:(id)a1 completion:(id /* block */)a2;
- (void)fetchUserInformationForAltDSID:(id)a0 completion:(id /* block */)a1;

@end
