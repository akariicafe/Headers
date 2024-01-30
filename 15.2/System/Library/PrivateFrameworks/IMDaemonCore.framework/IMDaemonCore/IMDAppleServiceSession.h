@class NSArray, NSString, IDSAccount;

@interface IMDAppleServiceSession : IMDServiceSession {
    NSString *_serviceName;
}

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;
@property (readonly, retain, nonatomic) NSArray *aliases;
@property (readonly, retain, nonatomic) NSArray *vettedAliases;
@property (readonly, retain, nonatomic) NSString *callerURI;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, retain, nonatomic) NSString *GUID;

+ (id)idsAccounts;

- (void)unregisterAccount:(id)a0;
- (void)reIdentify;
- (void)sessionDidBecomeActive;
- (id)idsAccountForURI:(id)a0 IDSServiceName:(id)a1;
- (void)updateAuthorizationCredentials:(id)a0 token:(id)a1 account:(id)a2;
- (id)idsAccountForFromURI:(id)a0 toURI:(id)a1;
- (void)addAliases:(id)a0 account:(id)a1;
- (void)passwordUpdatedWithAccount:(id)a0;
- (id)_aliasesForIDSAccount:(id)a0;
- (void)loginServiceSessionWithAccount:(id)a0;
- (void)registerAccount:(id)a0;
- (void)validateAliases:(id)a0 account:(id)a1;
- (void)authenticateAccount:(id)a0;
- (void)sessionWillBecomeInactiveWithAccount:(id)a0;
- (id)imdAccountForIDSAccount:(id)a0;
- (void)reregister;
- (long long)_validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (void)refreshRegistration;
- (id)callerURIForIDSAccount:(id)a0;
- (void)logoutServiceSessionWithAccount:(id)a0;
- (id)initWithAccount:(id)a0 service:(id)a1;
- (void)unvalidateAliases:(id)a0 account:(id)a1;
- (BOOL)_isDeviceRegistered;
- (id)_aliases;
- (void)removeAliases:(id)a0 account:(id)a1;
- (long long)validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (id)_aliasStringsForIDSAccount:(id)a0;
- (void)_updateAccountStatusToUnregistered:(BOOL)a0 withAccount:(id)a1;
- (void)validateProfileWithAccount:(id)a0;
- (long long)validationStatusForAlias:(id)a0;
- (void)activeDevicesUpdated;
- (BOOL)_isDeviceRegisteredForAccount:(id)a0;
- (void)resetCallerIDForIDSAccount:(id)a0;
- (void)dealloc;

@end
