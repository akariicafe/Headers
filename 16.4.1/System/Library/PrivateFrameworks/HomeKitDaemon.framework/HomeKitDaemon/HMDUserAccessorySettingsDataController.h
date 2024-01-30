@class NSArray, NSUUID, HMDManagedObjectContext;

@interface HMDUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController> {
    NSUUID *_userModelID;
    HMDManagedObjectContext *_moc;
}

@property (readonly) BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests;
@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (readonly, copy) NSArray *userListeningHistoryUpdateControlModelAccessoriesToEncode;

- (void).cxx_destruct;
- (void)enableUserListeningHistoryForAccessory:(id)a0;
- (void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (void)handleUserListeningHistoryUpdateControlUpdatedAccessoryUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)_updatedAccessorySetFromAccessoryUUIDs:(id)a0 currentAccessories:(id)a1 error:(id *)a2;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)a0 activityNotificationsEnabledForPersonalRequests:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleRemovedAccessoryWithModelID:(id)a0;
- (id)initWithUserModelID:(id)a0 managedObjectContext:(id)a1;

@end
