@class NSString, IMUserNotificationCenter, NSMutableSet, ACAccountStore, _FTPasswordManagerCachedAuthTokenInfo;

@interface FTPasswordManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, FTPasswordManager> {
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
    IMUserNotificationCenter *_userNotificationCenter;
    _FTPasswordManagerCachedAuthTokenInfo *_cachedAuthTokenInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_loginUserNotificationForService:(id)a0 user:(id)a1 isForBadPassword:(BOOL)a2 showForgetPassword:(BOOL)a3 shouldRememberPassword:(BOOL)a4;

- (id)initWithUserNotificationCenter:(id)a0;
- (id)_keychainPasswordForUsername:(id)a0 service:(id)a1;
- (void)_updateStatus:(id)a0 onAccount:(id)a1;
- (id)_accountWithUsernameAlias:(id)a0 inStore:(id)a1;
- (BOOL)_usernameHasCorrespondingIdMSAccount:(id)a0;
- (id)_findIDSAccountInStore:(id)a0 withCriteria:(id /* block */)a1;
- (void)setHandlesForProfileID:(id)a0 username:(id)a1 service:(id)a2 handles:(id)a3;
- (BOOL)supportsAuthTokenRequests;
- (void)requestPasswordForUsername:(id)a0 service:(id)a1 badPassword:(BOOL)a2 showForgotPassword:(BOOL)a3 shouldRememberPassword:(BOOL)a4 outRequestID:(id *)a5 completionBlock:(id /* block */)a6;
- (void)setPasswordForProfileID:(id)a0 username:(id)a1 service:(id)a2 password:(id)a3 outRequestID:(id *)a4 completionBlock:(id /* block */)a5;
- (id)_findIDSAccountsInStore:(id)a0 withCriteria:(id /* block */)a1;
- (void)requestAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 badPassword:(BOOL)a3 showForgotPassword:(BOOL)a4 outRequestID:(id *)a5 completionBlock:(id /* block */)a6;
- (void)fetchPasswordForProfileID:(id)a0 username:(id)a1 service:(id)a2 outRequestID:(id *)a3 completionBlock:(id /* block */)a4;
- (void)fetchAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 outRequestID:(id *)a3 completionBlock:(id /* block */)a4;
- (id)_keychainAuthTokenForUsername:(id)a0 service:(id)a1;
- (void)cleanUpAccountsWithUsername:(id)a0 orProfileID:(id)a1 basedOnInUseUsernames:(id)a2 profileIDs:(id)a3 completionBlock:(id /* block */)a4;
- (void)setAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 authToken:(id)a3 selfHandle:(id)a4 outRequestID:(id *)a5 completionBlock:(id /* block */)a6;
- (id)profileIDForACAccount:(id)a0;
- (void)_setKeychainPassword:(id)a0 forUsername:(id)a1 service:(id)a2;
- (void)performCleanUpWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_shouldForceSilentOnlyAuthForUsername:(id)a0 serviceIdentifier:(id)a1;
- (id)_accountWithUsername:(id)a0 inStore:(id)a1;
- (id)init;
- (void)updatePreviousUsername:(id)a0 toNewUsername:(id)a1;
- (void)requestAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 badPassword:(BOOL)a3 showForgotPassword:(BOOL)a4 failIfNotSilent:(BOOL)a5 outRequestID:(id *)a6 completionBlock:(id /* block */)a7;
- (id)_accountOptionsDictForRenewCredentialsForService:(id)a0 username:(id)a1 shouldFailIfNotSilent:(BOOL)a2;
- (void)requestAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 badPassword:(BOOL)a3 showForgotPassword:(BOOL)a4 forceRenewal:(BOOL)a5 failIfNotSilent:(BOOL)a6 outRequestID:(id *)a7 completionBlock:(id /* block */)a8;
- (id)_accountWithProfileID:(id)a0 username:(id)a1 inStore:(id)a2;
- (void)_renewCredentialsIfPossibleForAccount:(id)a0 username:(id)a1 inServiceIdentifier:(id)a2 originalInServiceIdentifier:(id)a3 serviceName:(id)a4 failIfNotSilent:(BOOL)a5 renewHandler:(id /* block */)a6 shortCircuitCompletionBlock:(id /* block */)a7;
- (BOOL)isAuthTokenReceiptTime:(double)a0 withinGracePeriod:(double)a1;
- (void)cleanUpAccountsBasedOnInUseUsernamesBlock:(id /* block */)a0 profileIDBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (double)authTokenGracePeriod;
- (void)setAuthTokenForProfileID:(id)a0 username:(id)a1 service:(id)a2 authToken:(id)a3 selfHandle:(id)a4 accountStatus:(id)a5 outRequestID:(id *)a6 completionBlock:(id /* block */)a7;
- (id)acAccountWithProfileID:(id)a0 username:(id)a1 accountStore:(id)a2;
- (void)accountWasRemoved:(id)a0;
- (void)_setKeychainAuthToken:(id)a0 forUsername:(id)a1 service:(id)a2;
- (id)_accountBasedOnProfileID:(id)a0 orUsername:(id)a1 inStore:(id)a2;
- (void)setAccountStatus:(id)a0 forProfileID:(id)a1 username:(id)a2 service:(id)a3;
- (id)_accountWithProfileIDMatchingUser:(id)a0 inStore:(id)a1;
- (id)_profileIDForUsername:(id)a0 inStore:(id)a1;
- (void)removeAuthTokenAllowingGracePeriodForProfileID:(id)a0 username:(id)a1;
- (void)accountCredentialChanged:(id)a0;
- (void)cancelRequestID:(id)a0 serviceIdentifier:(id)a1;

@end
