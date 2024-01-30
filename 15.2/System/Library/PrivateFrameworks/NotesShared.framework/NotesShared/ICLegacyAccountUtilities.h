@interface ICLegacyAccountUtilities : NSObject

+ (BOOL)didChooseToMigrateAccountsForContext:(id)a0 forAccountPassingTest:(id /* block */)a1;
+ (BOOL)didChooseToMigrateAccount:(id)a0 context:(id)a1;
+ (BOOL)didChooseToMigrateLegacyAccountType:(long long)a0;
+ (id)legacyAccountForPrimaryICloudAccountWithContext:(id)a0;
+ (id)accountIdentifierForAccount:(id)a0;
+ (id)legacyAccountForLegacyAccountType:(long long)a0 context:(id)a1;
+ (id)legacyAccountForLocalAccountWithContext:(id)a0;
+ (BOOL)isLegacyLocalAccount:(id)a0;
+ (id)accountForAccountIdentifier:(id)a0 context:(id)a1;
+ (id)legacyAccountForICloudACAccount:(id)a0 context:(id)a1;
+ (id)legacyAccountForICloudAccount:(id)a0 context:(id)a1;

@end
