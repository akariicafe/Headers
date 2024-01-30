@interface HMDUserDataSource : NSObject <HMDUserDataSource>

- (id)userDataControllerWithDelegate:(id)a0 dataSource:(id)a1 queue:(id)a2 userID:(id)a3 homeID:(id)a4 sharedSettingsController:(id)a5 privateSettingsController:(id)a6 isCurrentUser:(BOOL)a7;
- (id)userDataBackingStoreControllerWithDelegate:(id)a0 queue:(id)a1 zoneName:(id)a2 home:(id)a3 shareMessenger:(id)a4;
- (BOOL)isCurrentUser:(id)a0;

@end
