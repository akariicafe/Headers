@class NSString, NSPersistentStoreCoordinator, NSURL, NSDictionary;

@interface ACDDatabase : NSObject <ACDDatabaseConnectionDelegate, ACDDatabaseProtocol> {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSDictionary *_storeOptions;
}

@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)initWithDatabaseURL:(id)a0;
- (id)createConnection;
- (id)_addPersistentStoreWithType:(id)a0 configuration:(id)a1 URL:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)_performBackupToURL:(id)a0 unverifiedBackupURL:(id)a1 error:(id *)a2;
- (BOOL)restoreFromBackupReturningError:(id *)a0;
- (void)databaseConnection:(id)a0 encounteredUnrecoverableError:(id)a1;
- (BOOL)resetReturningError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_shouldResetPersistentStoreAfterError:(id)a0;
- (id)initWithDatabaseURL:(id)a0 storeOptions:(id)a1;
- (BOOL)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id *)a0;
- (id)_backupURL;
- (id)_unverifiedBackupURL;
- (BOOL)performBackupReturningError:(id *)a0;

@end
