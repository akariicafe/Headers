@class NSString;

@interface ADAccountsNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)postNotificationForChangeWithAccount:(id)a0 andOldAccount:(id)a1 withType:(id)a2;
- (void)checkForStorefrontChangeWithAccount:(id)a0 andOldAccount:(id)a1;

@end
