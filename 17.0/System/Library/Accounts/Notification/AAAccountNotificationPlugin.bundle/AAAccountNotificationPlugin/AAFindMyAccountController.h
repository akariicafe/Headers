@interface AAFindMyAccountController : NSObject

+ (void)updateDeviceLocatorChildAccountForAppleAccount:(id)a0;
+ (void)updateFMFChildAccountForAppleAccount:(id)a0;
+ (void)addFMFChildAccountToAppleAccount:(id)a0;
+ (void)addDeviceLocatorChildAccountToAppleAccount:(id)a0;
+ (id)_findOrphanedAccountForAccountType:(id)a0 forAppleAccount:(id)a1 withStore:(id)a2;

@end
