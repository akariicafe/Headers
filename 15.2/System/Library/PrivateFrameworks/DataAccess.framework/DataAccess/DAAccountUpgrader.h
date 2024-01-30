@interface DAAccountUpgrader : NSObject

+ (void)_moveExchangeCredentialsToAppleAccessGroup;
+ (void)_updateFacebookAccountAuthenticationTypes;
+ (void)_upgradeDAAccounts;
+ (void)_writeDeviceSpecificID;
+ (void)_notifyDaHolidaySubCalAccount;
+ (void)upgradeAccounts:(BOOL)a0;

@end
