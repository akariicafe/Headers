@interface AFDeviceStateConnection : NSObject

- (void)fetchSiriKitAppIdentifiersWithNotificationPreviewRestrictionsWithCompletion:(id /* block */)a0;
- (void)getPersonalSettingsForSharedUserID:(id)a0 completion:(id /* block */)a1;

@end
