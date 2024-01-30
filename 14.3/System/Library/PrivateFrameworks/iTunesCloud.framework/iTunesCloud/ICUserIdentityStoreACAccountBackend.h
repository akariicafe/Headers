@class ACAccountType, NSString, NSArray, ICUnfairLock, NSMutableDictionary, NSObject, NSMapTable, ACAccountStore;
@protocol OS_dispatch_queue, ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreACAccountBackend : NSObject <ICUserIdentityStoreBackend> {
    ACAccountStore *_accountStore;
    NSMapTable *_accountToIdentityProperties;
    NSArray *_allStoreAccounts;
    NSMutableDictionary *_dsidToAccount;
    id _primaryICloudAccountIdentityPropertiesValue;
    ACAccountType *_storeAccountType;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    ICUnfairLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<ICUserIdentityStoreBackendDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_storeAccountTypeWithError:(id *)a0;
- (id)init;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeIdentityForDSID:(id)a0 completion:(id /* block */)a1;
- (id)activeLockerAccountDSIDWithError:(id *)a0;
- (void)_synchronize;
- (void)dealloc;
- (void)_applyLocalStoreAccountProperties:(id)a0 toAccount:(id)a1;
- (BOOL)replaceIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (id)identityPropertiesForPrimaryICloudAccountWithError:(id *)a0;
- (BOOL)updateActiveAccountDSID:(id)a0 error:(id *)a1;
- (BOOL)updateActiveLockerAccountDSID:(id)a0 error:(id *)a1;
- (id)_storeAccountForDSID:(id)a0 error:(id *)a1;
- (void)_handleITunesStoreAccountsChanged;
- (id)_newUserIdentityPropertiesForAccount:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_storeAccountForDSID:(id)a0 bypassCache:(BOOL)a1 error:(id *)a2;
- (id)_activeStoreAccountWithError:(id *)a0;
- (id)verificationContextForDSID:(id)a0 error:(id *)a1;
- (void)_applyIdentityProperties:(id)a0 toAccount:(id)a1;
- (void)synchronize;
- (id)_primaryICloudAccountIdentityProperties;
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)a0;
- (id)verificationContextForAccountEstablishmentWithError:(id *)a0;
- (id)activeAccountDSIDWithError:(id *)a0;
- (BOOL)setLocalStoreAccountProperties:(id)a0 error:(id *)a1;
- (id)initWithACAccountStore:(id)a0;
- (id)_allStoreAccountsWithError:(id *)a0;
- (id)identityPropertiesForDSID:(id)a0 error:(id *)a1;
- (BOOL)setIdentityProperties:(id)a0 forDSID:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)localStoreAccountPropertiesWithError:(id *)a0;

@end
