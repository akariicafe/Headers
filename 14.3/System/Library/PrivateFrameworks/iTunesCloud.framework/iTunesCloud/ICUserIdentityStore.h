@class NSString, ICDelegateAccountStore, ICUserIdentityStoreCoding, ICLocalStoreAccountProperties, ICValueHistory, NSObject, ICDelegateAccountStoreOptions, ACAccountStore;
@protocol OS_dispatch_queue, ICUserIdentityStoreBackend;

@interface ICUserIdentityStore : NSObject <ICUserIdentityStoreBackendDelegate, NSSecureCoding> {
    ACAccountStore *_accountStore;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id<ICUserIdentityStoreBackend> _backend;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (class, readonly) ICUserIdentityStore *nullIdentityStore;
@property (class, readonly) ICUserIdentityStore *defaultIdentityStore;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long identityStoreStyle;
@property (readonly, nonatomic) id<ICUserIdentityStoreBackend> _unsafeBackend;
@property (readonly, nonatomic) ICLocalStoreAccountProperties *localStoreAccountProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)testingIdentityStoreWithSingleWriterService:(id)a0;
+ (void)_claimSingleWriterStatus;
+ (id)testingIdentityStoreWithDatabasePath:(id)a0;

- (void)enumerateDelegateTokensWithType:(long long)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_assertNonNullIdentityStoreForSelector:(SEL)a0;
- (void)getVerificationContextForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (id)_existingIdentityPropertiesForUserIdentity:(id)a0 error:(id *)a1;
- (id)_initCommon;
- (void)getPropertiesForActiveICloudAccountWithCompletionHandler:(id /* block */)a0;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)_saveIdentityProperties:(id)a0 andPostAccountChangeNotification:(BOOL)a1 forUserIdentity:(id)a2 error:(id *)a3;
- (void).cxx_destruct;
- (void)insertPropertiesForUserIdentity:(id)a0 andPostAccountChangeNotification:(BOOL)a1 usingBlock:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)setActiveLockerAccountWithDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeAllDelegateTokensWithCompletionHandler:(id /* block */)a0;
- (id)getPropertiesForUserIdentity:(id)a0 error:(id *)a1;
- (void)getDelegationUUIDsForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)enumerateDelegateTokensUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_initializeLocalStoreAccountProperties;
- (void)removeDelegateTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(id /* block */)a0;
- (id)_openDelegateAccountStoreForUserIdentity:(id)a0 error:(id *)a1;
- (void)updatePropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_updateDelegateAccountStoreUsingBlock:(id /* block */)a0;
- (id)userIdentitiesForAllStoreAccountsWithError:(id *)a0;
- (id)DSIDForUserIdentity:(id)a0 outError:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)_registerForDelegateAccountStoreNotifications:(id)a0;
- (void)insertPropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1;
- (void)_reloadForExternalChange;
- (void)synchronize;
- (BOOL)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(BOOL)a0;
- (id)userIdentitiesForManageableAccountsWithError:(id *)a0;
- (void)_delegateAccountStoreDidChangeNotification:(id)a0;
- (void)getuserIdentitiesForAllStoreAccountsWithCompletionHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)getPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)insertPropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)_dsidForUserIdentity:(id)a0 error:(id *)a1;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)setActiveAccountWithDSID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dispatchDidChangeNotification:(BOOL)a0 didDelegateAccountStoreChange:(BOOL)a1;
- (void)removePropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importValuesFromCodingHelper:(id)a0;
- (BOOL)_allowsDelegationForUserIdentity:(id)a0;
- (id)_icValidStoreAccountsFromACAccounts:(id)a0;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (id)_initWithStyle:(long long)a0 delegateAccountStoreOptions:(id)a1;
- (id)_openDelegateAccountStoreWithError:(id *)a0;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(id /* block */)a0;
- (void)getUserIdentitiesForManageableAccountsWithCompletionHandler:(id /* block */)a0;
- (void)removeDelegateTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)a0;
- (void)updatePropertiesForUserIdentity:(id)a0 usingBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (void)userIdentityStoreBackendDidChange:(id)a0;
- (id)_dsidForTimestamp:(unsigned long long)a0 history:(id)a1;

@end
