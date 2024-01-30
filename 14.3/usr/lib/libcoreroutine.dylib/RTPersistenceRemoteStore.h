@class NSManagedObjectID, RTDarwinNotificationHelper, NSPersistentStoreCoordinator;

@interface RTPersistenceRemoteStore : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_currentDeviceManagedObjectId;
    RTDarwinNotificationHelper *_notificationHelper;
}

- (id)init;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)initWithReadOnly:(BOOL)a0;
- (id)_createManagedObjectContext;
- (void)updateCurrentDeviceMOIDWithContext:(id)a0;

@end
