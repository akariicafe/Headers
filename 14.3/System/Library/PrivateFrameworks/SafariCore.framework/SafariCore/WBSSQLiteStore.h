@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue, WBSSQLiteStoreDelegate;

@interface WBSSQLiteStore : NSObject {
    long long _databaseLockingPolicy;
    long long _protectionType;
    int _databaseCoordinationLockFileDescriptor;
    BOOL _fallBackToMemoryStoreIfError;
}

@property (readonly, nonatomic) WBSSQLiteDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (weak, nonatomic) id<WBSSQLiteStoreDelegate> delegate;
@property (readonly, nonatomic) BOOL isOpen;

- (id)init;
- (int)_migrateToSchemaVersion:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)savePendingChangesBeforeTermination;
- (id)initWithURL:(id)a0 protectionType:(long long)a1;
- (BOOL)_isDatabaseLocked;
- (void)_releaseDatabaseCoordinationLock;
- (void)_openDatabase:(id)a0 createIfNeeded:(BOOL)a1 checkIntegrity:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_handleOpenFailureWithStatus:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)a0;
- (void)_databaseWillClose;
- (BOOL)_confirmDatabaseIntegrityIsOK;
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)a0;
- (void)openAndCheckIntegrity:(BOOL)a0 createIfNeeded:(BOOL)a1 fallBackToMemoryStoreIfError:(BOOL)a2 lockingPolicy:(long long)a3 completionHandler:(id /* block */)a4;
- (id)initWithURL:(id)a0;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (int)_currentSchemaVersion;
- (int)_createFreshDatabaseSchema;
- (void)_closeDatabase;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (int)_setDatabaseSchemaVersion:(int)a0;

@end
