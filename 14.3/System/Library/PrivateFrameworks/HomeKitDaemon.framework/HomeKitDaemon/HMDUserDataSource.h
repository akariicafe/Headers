@interface HMDUserDataSource : NSObject <HMDUserDataSource>

- (id)userDataControllerWithDelegate:(id)a0 queue:(id)a1 userID:(id)a2 homeID:(id)a3 sharedSettingsController:(id)a4 privateSettingsController:(id)a5;
- (id)userDataBackingStoreControllerWithDelegate:(id)a0 queue:(id)a1 zoneName:(id)a2 home:(id)a3 shareMessenger:(id)a4;
- (BOOL)isCurrentUser:(id)a0;

@end
