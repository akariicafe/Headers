@class EFSQLSchema, NSString, EDPersistenceDatabaseConnectionPool, EDProtectedDatabasePersistence, EFSQLPropertyMapper;

@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionPoolDelegate, EDPersistenceDatabaseConnectionDelegate> {
    EDPersistenceDatabaseConnectionPool *_connectionPool;
}

@property (readonly, nonatomic) EDProtectedDatabasePersistence *protectedDatabasePersistence;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSString *databaseName;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) BOOL databaseIsCorrupt;
@property (readonly, nonatomic) BOOL enforceDataProtection;
@property BOOL setupIsComplete;
@property (readonly, nonatomic) BOOL isNestedDatabaseCall;
@property (readonly, nonatomic) BOOL writersAreWaiting;
@property (readonly, nonatomic) EFSQLSchema *schema;
@property (readonly, nonatomic) EFSQLSchema *protectedSchema;
@property (readonly, nonatomic) EFSQLPropertyMapper *propertyMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleRecurringActivity;
- (BOOL)performDatabaseSetupUsingTransaction:(BOOL)a0 block:(id /* block */)a1;
- (void)closeAllConnections;
- (id)urlForDatabasePath:(id)a0 type:(long long)a1;
- (BOOL)performWriteBlock:(id /* block */)a0;
- (void)reconcileJournalWithCompletionBlock:(id /* block */)a0;
- (BOOL)performReadBlock:(id /* block */)a0;
- (void)checkInConnection:(id)a0;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)a0;
- (void)handleExceptionCreatingConnection:(id)a0;
- (BOOL)performWithOptions:(unsigned long long)a0 block:(id /* block */)a1;
- (id)checkOutConnectionIsWriter:(BOOL)a0;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 maxConcurrentReaders:(unsigned long long)a2 schema:(id)a3 protectedSchema:(id)a4 propertyMapper:(id)a5 protectedDatabasePersistence:(id)a6;
- (void).cxx_destruct;
- (id)init;
- (id)urlForDatabasePath:(id)a0 type:(long long)a1 fileProtection:(id)a2;
- (id)fileProtectionForDatabaseType:(long long)a0;
- (id)openConnectionIsWriter:(BOOL)a0;

@end
