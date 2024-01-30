@interface AFDeviceStateConnection : NSObject

- (void)getPersonalSettingsForSharedUserID:(id)a0 completion:(id /* block */)a1;
- (void)fetchSiriKitAppIdentifiersWithNotificationPreviewRestrictionsWithCompletion:(id /* block */)a0;

@end
