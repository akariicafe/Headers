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

- (id)initWithURL:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (void)_closeDatabase;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (int)_createFreshDatabaseSchema;
- (void)dealloc;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (int)_migrateToSchemaVersion:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (int)_currentSchemaVersion;
- (void)openAndCheckIntegrity:(BOOL)a0 createIfNeeded:(BOOL)a1 fallBackToMemoryStoreIfError:(BOOL)a2 lockingPolicy:(long long)a3 completionHandler:(id /* block */)a4;
- (BOOL)_acquireDatabaseCoordinationLockForDatabaseURL:(id)a0;
- (BOOL)_confirmDatabaseIntegrityIsOK;
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)a0;
- (void)_databaseWillClose;
- (void)_handleOpenFailureWithStatus:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isDatabaseLocked;
- (void)_openDatabase:(id)a0 createIfNeeded:(BOOL)a1 checkIntegrity:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_releaseDatabaseCoordinationLock;
- (id)initWithURL:(id)a0 protectionType:(long long)a1;

@end
