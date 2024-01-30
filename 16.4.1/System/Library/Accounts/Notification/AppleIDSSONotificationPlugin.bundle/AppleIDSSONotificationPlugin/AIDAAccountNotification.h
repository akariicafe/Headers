@class NSString;

@interface AIDAAccountNotification : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)_appleIDAuthenticationAccountsMatchingAppleAccount:(id)a0 inStore:(id)a1;
- (id)_supportedServiceIDs;

@end
