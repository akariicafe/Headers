@class NSString;

@interface AAIDMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)_verifiedEmailForAccount:(id)a0 fromOldAccount:(id)a1;
- (BOOL)_shouldForceRenewCredentialsForAccount:(id)a0 inStore:(id)a1 oldAccount:(id)a2;
- (BOOL)updateAppleAccount:(id)a0 withRepairState:(unsigned long long)a1 store:(id)a2;
- (unsigned long long)_newRepairStateOnAuthKitAccount:(id)a0 vsOldAccount:(id)a1;
- (BOOL)_shouldSilentlySignOutAppleAccount:(id)a0;
- (void)_enableDataclassesForVerifiedEmailOnAppleAccount:(id)a0 inStore:(id)a1;

@end
