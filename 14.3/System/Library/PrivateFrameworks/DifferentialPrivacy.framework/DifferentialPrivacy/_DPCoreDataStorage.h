@class _DPDataProtectionStateMonitor, NSMutableDictionary, NSDictionary, NSManagedObjectModel, NSString, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface _DPCoreDataStorage : NSObject

@property (readonly, nonatomic) NSDictionary *paths;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, nonatomic) NSMutableDictionary *managedObjectContexts;
@property (readonly, nonatomic) NSMutableDictionary *persistentStoreCoordinators;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queueMOC;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queuePSC;
@property (readonly, nonatomic) _DPDataProtectionStateMonitor *dataProtectionMonitor;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, copy, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) BOOL readOnly;

+ (BOOL)createDatabaseDirectory:(id)a0 error:(id *)a1;
+ (id)persistentStoreOptionsFor:(id)a0 readOnly:(BOOL)a1;
+ (unsigned long long)deleteObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 fetchOffset:(unsigned long long)a4 fetchLimit:(unsigned long long)a5;
+ (unsigned long long)countObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2;
+ (id)storageWithDirectory:(id)a0 databaseName:(id)a1 modelURL:(id)a2 readOnly:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (id)persistentStoreCoordinatorFor:(id)a0;
- (id)initWithDirectory:(id)a0 databaseName:(id)a1 modelURL:(id)a2 readOnly:(BOOL)a3;
- (void)handleDataProtectionChangeFor:(id)a0 willBeAvailable:(BOOL)a1;
- (void)invalidateManagedObjectContextFor:(id)a0;
- (void)invalidatePersistentStoreCoordinatorFor:(id)a0;
- (void)handleDatabaseErrors:(id)a0 forPSC:(id)a1 protectionClass:(id)a2;
- (BOOL)deleteDatabaseForPSC:(id)a0 protectionClass:(id)a1 obliterate:(BOOL)a2;
- (id)mocForProtectionClass:(id)a0;
- (unsigned long long)deleteVersionMismatchRecords:(unsigned long long)a0 entities:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)deleteSubmittedRecords:(unsigned long long)a0 entities:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)deleteOldObjectsToLimitTotalNumber:(unsigned long long)a0 entities:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)deleteObjectsOlderThanDate:(id)a0 entities:(id)a1 limit:(unsigned long long)a2;
- (unsigned long long)countObjectsForEntities:(id)a0 predicate:(id)a1;
- (BOOL)deleteStorageFor:(id)a0 obliterate:(BOOL)a1;

@end
