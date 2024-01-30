@class NSString;

@interface CalACMigrationAccountStore : NSObject <CalMigrationAccountStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)accountWithIdentifier:(id)a0;
- (BOOL)removeAccount:(id)a0 error:(id *)a1;
- (BOOL)saveAccount:(id)a0 withError:(id *)a1;
- (id)childAccountsForAccount:(id)a0 withTypeIdentifier:(id)a1;
- (id)createAccountWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
- (id)createChildAccountOfParent:(id)a0 withAccountTypeIdentifier:(id)a1 error:(id *)a2;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)a0 error:(id *)a1;

@end
