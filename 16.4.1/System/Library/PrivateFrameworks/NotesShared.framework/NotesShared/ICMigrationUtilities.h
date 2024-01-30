@interface ICMigrationUtilities : NSObject

+ (void)deleteMigratedHTMLAccountIfNecessaryForModernAccount:(id)a0;
+ (void)deleteMigratedHTMLAccountsInContext:(id)a0;
+ (void)fetchAndSetMigrationStateForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)fetchMigrationStateAndUserRecordForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)fetchMigrationStateForAccountID:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)saveDidChooseToMigrate:(BOOL)a0 didFinishMigration:(BOOL)a1 didMigrateOnMac:(BOOL)a2 toACAccount:(id)a3 inStore:(id)a4 completionHandler:(id /* block */)a5;
+ (void)updateAllLegacyAccountMigrationStatesInContext:(id)a0;
+ (void)updateLegacyAccountMigrationStateForModernAccount:(id)a0;

@end
