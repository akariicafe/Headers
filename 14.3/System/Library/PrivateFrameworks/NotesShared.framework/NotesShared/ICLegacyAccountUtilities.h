@interface ICLegacyAccountUtilities : NSObject

+ (id)legacyAccountForLegacyAccountType:(long long)a0 context:(id)a1;
+ (BOOL)didChooseToMigrateLegacyAccountType:(long long)a0;
+ (BOOL)didChooseToMigrateAccountsForContext:(id)a0 forAccountPassingTest:(id /* block */)a1;
+ (id)legacyAccountForPrimaryICloudAccountWithContext:(id)a0;
+ (id)legacyAccountForLocalAccountWithContext:(id)a0;
+ (id)legacyAccountForICloudACAccount:(id)a0 context:(id)a1;
+ (id)accountForAccountIdentifier:(id)a0 context:(id)a1;
+ (BOOL)didChooseToMigrateAccount:(id)a0 context:(id)a1;
+ (id)legacyAccountForICloudAccount:(id)a0 context:(id)a1;
+ (BOOL)isLegacyLocalAccount:(id)a0;
+ (id)accountIdentifierForAccount:(id)a0;

@end
