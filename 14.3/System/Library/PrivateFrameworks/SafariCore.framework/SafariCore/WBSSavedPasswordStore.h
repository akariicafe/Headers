@class NSArray, NSSet, NSMutableDictionary, WBSKeychainCredentialNotificationMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSavedPasswordStore : NSObject {
    NSMutableDictionary *_domainToUsers;
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

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)_savedPasswords;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (id)_savedPasswordForProtectionSpace:(id)a0 user:(id)a1 password:(id)a2;
- (id)_allInternetPasswordEntriesFromKeychain;
- (void)_cleanUpRedundantCredentialsWithoutUsernames;
- (void)_removePassword:(id)a0;
- (void)_ensureDomainsToUsersExists;
- (void)removePassword:(id)a0;
- (id)_persistentIdentifierForUser:(id)a0 host:(id)a1;
- (id)savedPasswordForURLCredential:(id)a0 protectionSpace:(id)a1;
- (void)savedPasswordWithAllMetadataForURLCredential:(id)a0 protectionSpace:(id)a1 completion:(id /* block */)a2;
- (id)savedPasswordForURL:(id)a0 user:(id)a1 password:(id)a2;
- (id)savedPasswordsForPersistentIdentifiers:(id)a0;
- (void)removeSite:(id)a0 fromPassword:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)canChangeSavedPassword:(id)a0 toUser:(id)a1 password:(id)a2;
- (BOOL)changeSavedPassword:(id)a0 toUser:(id)a1 password:(id)a2;
- (unsigned long long)numberOfSavedPasswordForHighLevelDomain:(id)a0;
- (BOOL)canSaveUser:(id)a0 password:(id)a1 forProtectionSpace:(id)a2 highLevelDomain:(id)a3;
- (id)saveUser:(id)a0 password:(id)a1 forProtectionSpace:(id)a2 highLevelDomain:(id)a3;
- (id)persistentIdentifierForCredential:(id)a0 protectionSpace:(id)a1;
- (id)persistentIdentifierForSavedPassword:(id)a0;

@end
