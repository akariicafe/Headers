@class NSArray, NSSet, NSMutableDictionary, WBSKeychainCredentialNotificationMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSavedPasswordStore : NSObject {
    NSMutableDictionary *_highLevelDomainToUsernameToPasswordToSavedPasswords;
    NSArray *_savedPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSArray *savedPasswords;
@property (readonly, nonatomic) NSArray *savedPasswordsExcludingNeverSaveMarkerPasswords;
@property (readonly, nonatomic) BOOL hasPasswordsEligibleForAutoFill;
@property (readonly, nonatomic) NSSet *highLevelDomainsOfAllSavedPasswordsExcludingNeverSaveMarkerPasswords;

+ (id)sharedStore;
+ (void)removePassword:(id)a0;

- (id)savedPasswordsForPersistentIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)reset;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (id)_savedPasswordForProtectionSpace:(id)a0 user:(id)a1 password:(id)a2;
- (id)_savedPasswords;
- (id)_allInternetPasswordEntriesFromKeychain;
- (id)_allSidecarsFromKeychain;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)_removePassword:(id)a0;
- (void)_removeSidecarObjectsOnInternalQueueForSavedPassword:(id)a0 withBlock:(id /* block */)a1;
- (void)_saveSidecarObjectsOnInternalQueueForSavedPassword:(id)a0 withBlock:(id /* block */)a1;
- (void)_ensureDomainsToUsersExists;
- (void)removePassword:(id)a0;
- (id)_persistentIdentifierForUser:(id)a0 host:(id)a1;
- (id)savedPasswordForURLCredential:(id)a0 protectionSpace:(id)a1;
- (void)savedPasswordWithAllMetadataForURLCredential:(id)a0 protectionSpace:(id)a1 completion:(id /* block */)a2;
- (id)savedPasswordForURL:(id)a0 user:(id)a1 password:(id)a2;
- (void)removeSite:(id)a0 fromPassword:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)canChangeSavedPassword:(id)a0 toUser:(id)a1 password:(id)a2;
- (BOOL)changeSavedPassword:(id)a0 toUser:(id)a1 password:(id)a2;
- (BOOL)changeSavedPasswordWithRequest:(id)a0;
- (BOOL)canSaveUser:(id)a0 password:(id)a1 forProtectionSpace:(id)a2 highLevelDomain:(id)a3;
- (id)saveUser:(id)a0 password:(id)a1 forProtectionSpace:(id)a2 highLevelDomain:(id)a3;
- (void)saveTOTPGenerator:(id)a0 forSavedPassword:(id)a1;
- (void)removeTOTPGenerator:(id)a0 forSavedPassword:(id)a1;
- (unsigned long long)numberOfSavedPasswordForHighLevelDomain:(id)a0;
- (id)persistentIdentifierForCredential:(id)a0 protectionSpace:(id)a1;
- (id)persistentIdentifierForSavedPassword:(id)a0;

@end
