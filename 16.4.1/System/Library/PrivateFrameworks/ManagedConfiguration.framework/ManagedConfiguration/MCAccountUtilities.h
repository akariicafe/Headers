@class NSObject;
@protocol OS_dispatch_queue;

@interface MCAccountUtilities : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signInQueue;

+ (BOOL)hasManagedAccountOfDataclasses:(id)a0;
+ (id)accountDataclassesForBundleID:(id)a0;
+ (id)appStoreAccountIdentifierForPersona:(id)a0;
+ (void)checkAccountConsistencyAndReleaseOrphanedAccounts;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_signIniCloudAccountWithAuthenticationResult:(id)a0 personaID:(id)a1 baseViewController:(id)a2 outError:(id *)a3;
- (BOOL)_signIniTunesAccountWithAuthenticationResult:(id)a0 personaID:(id)a1 baseViewController:(id)a2 outError:(id *)a3;
- (void)signInAccountsWithTypes:(id)a0 authenticationResult:(id)a1 personaID:(id)a2 baseViewController:(id)a3 completionHandler:(id /* block */)a4;

@end
