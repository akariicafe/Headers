@class NSManagedObjectID, NSUUID, NSPersistentHistoryToken, NSManagedObjectContext;

@interface RTPersistenceResetSyncContext : NSObject

@property (retain) NSManagedObjectID *currentDeviceObjectID;
@property (retain) NSUUID *currentDeviceIdentifier;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) NSPersistentHistoryToken *historyToken;

- (void).cxx_destruct;

@end
