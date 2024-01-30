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

- (id)createConnection;
- (BOOL)_performBackupToURL:(id)a0 unverifiedBackupURL:(id)a1 error:(id *)a2;
- (id)_unverifiedBackupURL;
- (BOOL)_persistentStoreCoodinator_resetPersistentStoreCoordinatorWithError:(id *)a0;
- (id)_addPersistentStoreWithType:(id)a0 configuration:(id)a1 URL:(id)a2 options:(id)a3 error:(id *)a4;
- (id)_backupURL;
- (BOOL)_shouldResetPersistentStoreAfterError:(id)a0;
- (BOOL)resetReturningError:(id *)a0;
- (id)initWithDatabaseURL:(id)a0;
- (BOOL)restoreFromBackupReturningError:(id *)a0;
- (BOOL)performBackupReturningError:(id *)a0;
- (void)databaseConnection:(id)a0 encounteredUnrecoverableError:(id)a1;
- (id)init;
- (id)initWithDatabaseURL:(id)a0 storeOptions:(id)a1;
- (void).cxx_destruct;

@end
