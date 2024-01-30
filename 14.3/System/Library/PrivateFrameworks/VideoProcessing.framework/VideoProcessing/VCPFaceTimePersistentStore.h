@class NSPersistentContainer, NSManagedObjectContext;

@interface VCPFaceTimePersistentStore : NSObject {
    NSPersistentContainer *_persistentContainer;
    NSManagedObjectContext *_backgroundContext;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)fetchAllFaceTimeSessions;
- (BOOL)storeFaceTimeSession:(id)a0;

@end
