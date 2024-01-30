@class NSPersistentStoreCoordinator;

@interface DBManager : CHLogger

@property (retain, nonatomic) NSPersistentStoreCoordinator *fPersistentStoreCoordinator;

+ (void)setPropertyValue:(id)a0 forKey:(id)a1 forContext:(id)a2;
+ (BOOL)replacePersistentStore:(id)a0 withURL:(id)a1;
+ (long long)mapToDBMErrorCode:(id)a0;
+ (id)getPersistentCoordinator:(id)a0;
+ (id)migrateDataStoreAtLocation:(id)a0 withGetDestinationModel:(id /* block */)a1 isEncrypted:(BOOL)a2;
+ (id)modelForDBAtLocation:(id)a0;
+ (id)getPropertyValueForKey:(id)a0 forContext:(id)a1;
+ (BOOL)moveDBAtLocation:(id)a0 toLocation:(id)a1 withModelAtLocation:(id)a2;
+ (long long)isDataStoreAtURLInitialized:(id)a0 withModelAtURL:(id)a1;
+ (id)mangedObjectWithURI:(id)a0 inContext:(id)a1;
+ (BOOL)destroyDBAtLocation:(id)a0 withModelAtLocation:(id)a1;
+ (id)getStoreURLforContext:(id)a0;
+ (long long)versionForDBAtLocation:(id)a0;
+ (id)instanceWithModelURL:(id)a0;
+ (long long)versionForManagedObjectModel:(id)a0;
+ (id)entityDescriptionHavingName:(id)a0 forContext:(id)a1;
+ (BOOL)makeDatabaseAtURLClassCDataProtected:(id)a0;
+ (id)persistentStoreOptions:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (void)removeDataStoreAtLocation:(id)a0;
- (BOOL)addDataStoreAtLocation:(id)a0 isEncrypted:(BOOL)a1;

@end
