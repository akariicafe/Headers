@class NSString;

@interface MessageAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    int _updateAutoFetchSettingsRequestCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_accountHasLeafDeliveryAccountType:(id)a0;
+ (BOOL)_accountHasLeafMailAccountType:(id)a0;
+ (id)_childMailAccountWithParentAccount:(id)a0;
+ (BOOL)_accountHasMailAccountParentType:(id)a0;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)_addMailChildAccountToParentAccount:(id)a0 inStore:(id)a1;
- (id)_mailAccountToDeleteForAccount:(id)a0;
- (void)_updateAutoFetchSettingsAsynchronously;
- (void)_deliveryAccount:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)_accountIsExchangeAccount:(id)a0;
- (void)_deleteDataWithMailAccount:(id)a0;
- (void)_mailAccount:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)_shouldDeleteOnAccountChange:(id)a0 oldAccount:(id)a1;
- (BOOL)_accountWasDisabled:(id)a0 oldAccount:(id)a1;

@end
