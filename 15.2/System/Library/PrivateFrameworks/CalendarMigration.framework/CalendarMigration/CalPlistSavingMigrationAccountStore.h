@class NSMutableDictionary, NSString, NSURL, NSMutableSet;
@protocol CalMigrationAccountStore;

@interface CalPlistSavingMigrationAccountStore : NSObject <CalMigrationAccountStore>

@property (readonly, nonatomic) NSURL *plistURL;
@property (readonly, nonatomic) id<CalMigrationAccountStore> backingAccountStore;
@property (readonly, nonatomic) NSMutableDictionary *addedAccounts;
@property (readonly, nonatomic) NSMutableDictionary *modifiedAccounts;
@property (readonly, nonatomic) NSMutableDictionary *loadedAccounts;
@property (readonly, nonatomic) NSMutableDictionary *addedChildAccounts;
@property (readonly, nonatomic) NSMutableSet *deletedAccountIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountWithIdentifier:(id)a0;
- (id)childAccountsForAccount:(id)a0 withTypeIdentifier:(id)a1;
- (BOOL)removeAccount:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)a0 preloadedBackingAccount:(id)a1;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (id)createAccountWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)saveAccount:(id)a0 withError:(id *)a1;
- (id)createChildAccountOfParent:(id)a0 withAccountTypeIdentifier:(id)a1 error:(id *)a2;
- (void)_registerAddedChildAccountWithIdentifier:(id)a0 parentAccountIdentifier:(id)a1;
- (BOOL)_trySaveWithError:(id *)a0;
- (id)initWithPlistURL:(id)a0 backingAccountStore:(id)a1;

@end
