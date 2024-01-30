@class NSArray, NSUUID, NSPersistentStore, HMDManagedObjectContext;

@interface HMDSharedUserAccessorySettingsDataController : NSObject <HMDUserAccessorySettingsDataController> {
    NSUUID *_userModelID;
    NSUUID *_homeModelID;
    NSPersistentStore *_privateStore;
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
- (void)_addMissingAccessorySettingsFromAccessoryModelIDs:(id)a0 dataRoot:(id)a1;
- (id)_fetchDataRootWithError:(id *)a0;
- (void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)a0 activityNotificationsEnabledForPersonalRequests:(BOOL)a1 completion:(id /* block */)a2;
- (void)handleRemovedAccessoryWithModelID:(id)a0;
- (id)initWithUserModelID:(id)a0 homeModelID:(id)a1 privateStore:(id)a2 managedObjectContext:(id)a3;

@end
