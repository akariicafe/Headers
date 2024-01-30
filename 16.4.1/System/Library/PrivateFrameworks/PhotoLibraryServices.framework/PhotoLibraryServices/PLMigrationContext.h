@class NSString, NSPersistentStore, NSDictionary, NSURL, NSPersistentStoreCoordinator, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager;

@interface PLMigrationContext : NSObject <PLModelMigrationContext>

@property (retain, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property unsigned short previousStoreVersion;
@property unsigned int policy;
@property long long libraryIdentifier;
@property (retain, nonatomic) NSPersistentStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0 coordinator:(id)a1 onStore:(id)a2 orStoreURL:(id)a3 version:(unsigned short)a4 options:(id)a5 migrationPolicy:(unsigned int)a6 analyticsEventManager:(id)a7;

@end
