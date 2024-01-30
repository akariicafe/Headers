@class NSString, NSMutableDictionary, NSMutableSet;
@protocol CalMigrationAccountStore, CalChangeFilteringMigrationAccountStoreDelegate;

@interface CalChangeFilteringMigrationAccountStore : NSObject <CalMigrationAccountStore>

@property (readonly, nonatomic) id<CalMigrationAccountStore> backingAccountStore;
@property (readonly, weak, nonatomic) id<CalChangeFilteringMigrationAccountStoreDelegate> delegate;
@property (readonly, nonatomic) NSMutableDictionary *addedWrappedAccounts;
@property (readonly, nonatomic) NSMutableDictionary *addedWrappedChildAccounts;
@property (readonly, nonatomic) NSMutableDictionary *loadedAccounts;
@property (readonly, nonatomic) NSMutableSet *removedWrappedAccountIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storeFilteringAllChangesInBackingAccountStore:(id)a0;

- (id)accountWithIdentifier:(id)a0;
- (id)_backingAccountForAccount:(id)a0;
- (id)childAccountsForAccount:(id)a0 withTypeIdentifier:(id)a1;
- (BOOL)removeAccount:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithBackingAccountStore:(id)a0 delegate:(id)a1;
- (id)_accountWithIdentifier:(id)a0 preloadedBackingAccount:(id)a1;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (id)createAccountWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)saveAccount:(id)a0 withError:(id *)a1;
- (id)createChildAccountOfParent:(id)a0 withAccountTypeIdentifier:(id)a1 error:(id *)a2;

@end
