@class ACMonitoredAccountStore, NSString, NSMutableDictionary, ACAccount, NSNumber, NSObject;
@protocol OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ACMonitoredAccountStoreDelegateProtocol, ICUserIdentityStoreBackend> {
    ACMonitoredAccountStore *_accountStore;
    NSMutableDictionary *_identityPropertiesCache;
    NSMutableDictionary *_allStoreAccountsByDSID;
    ACAccount *_primaryICloudAccount;
    NSNumber *_activeAccountDSID;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_accountStoreDelegateQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ICUserIdentityStoreBackendDelegate> delegate;

- (BOOL)replaceIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (id)identityPropertiesForDSID:(id)a0 error:(id *)a1;
- (void)_applyLocalStoreAccountProperties:(id)a0 toAccount:(id)a1;
- (void)_postAccountsChangeNotification;
- (void)encodeWithCoder:(id)a0;
- (id)_registerAndLoadAccountsIfNecessary;
- (void)_applyIdentityProperties:(id)a0 toAccount:(id)a1;
- (id)_userIdentityPropertiesForAccount:(id)a0;
- (void)_synchronize;
- (id)activeLockerAccountDSIDWithError:(id *)a0;
- (id)localStoreAccountPropertiesWithError:(id *)a0;
- (BOOL)setIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (id)allManageableStoreAccountDSIDsWithError:(id *)a0;
- (id)_newUserIdentityPropertiesForAccount:(id)a0;
- (id)storeAccountForDSID:(id)a0 error:(id *)a1;
- (BOOL)updateActiveAccountDSID:(id)a0 error:(id *)a1;
- (id)allStoreAccountsWithError:(id *)a0;
- (id)activeAccountDSIDWithError:(id *)a0;
- (id)allStoreAccountDSIDsWithError:(id *)a0;
- (void)accountWasModified:(id)a0;
- (void).cxx_destruct;
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)a0;
- (id)init;
- (void)accountWasAdded:(id)a0;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)_storeAccountForDSID:(id)a0 error:(id *)a1;
- (BOOL)setLocalStoreAccountProperties:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)verificationContextForDSID:(id)a0 error:(id *)a1;
- (id)_activeStoreAccountWithError:(id *)a0;
- (BOOL)updateActiveLockerAccountDSID:(id)a0 error:(id *)a1;
- (id)_allStoreAccountsWithError:(id *)a0;
- (void)synchronize;
- (id)_primaryAppleAccountWithError:(id *)a0;
- (void)removeIdentityForDSID:(id)a0 completion:(id /* block */)a1;
- (void)accountWasRemoved:(id)a0;
- (id)localStoreAccountWithError:(id *)a0;
- (void)accountCredentialChanged:(id)a0;
- (id)verificationContextForAccountEstablishmentWithError:(id *)a0;

@end
