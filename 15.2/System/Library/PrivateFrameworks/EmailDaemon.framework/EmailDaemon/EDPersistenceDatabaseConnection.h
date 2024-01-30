@class EFSQLConnection, NSString, EDPersistenceDatabaseJournal, NSObject;
@protocol OS_os_log, EDPersistenceDatabaseConnectionDelegate;

@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable> {
    BOOL _isWriter;
    id<EDPersistenceDatabaseConnectionDelegate> _delegate;
    NSString *_protectedDatabaseName;
    NSString *_journalDatabaseName;
    EDPersistenceDatabaseJournal *_journal;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EFSQLConnection *sqlConnection;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, copy, nonatomic) NSString *protectedDatabasePath;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL protectedDatabaseAttached;
@property (readonly, nonatomic) BOOL journalDatabaseAttached;
@property (readonly, nonatomic) struct sqlite3 { } *sqlDB;
@property (readonly, nonatomic) BOOL isWriter;
@property (readonly, nonatomic) long long lastInsertedDatabaseID;
@property (readonly, nonatomic) long long transactionGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preparedStatementForQueryString:(id)a0;
- (void)close;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (void)open;
- (void).cxx_destruct;
- (long long)transactionTypeForWriting;
- (id)init;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (BOOL)tableExists:(id)a0;
- (int)configureSQLConnection;
- (void)dealloc;
- (void)handleError:(id)a0 message:(id)a1;
- (BOOL)executeInsertStatement:(id)a0 error:(id *)a1;
- (BOOL)checkForConnectionErrorWithMessage:(id)a0;
- (BOOL)executeDeleteStatement:(id)a0 error:(id *)a1;
- (BOOL)executeUpdateStatement:(id)a0 error:(id *)a1;
- (BOOL)executeStatementString:(id)a0 errorMessage:(id)a1;
- (BOOL)executeSelectStatement:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)executeUpdateStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (BOOL)databaseIsAttached:(id)a0;
- (BOOL)columnExists:(id)a0 inTable:(id)a1 type:(unsigned long long *)a2;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 isWriter:(BOOL)a2 delegate:(id)a3;
- (BOOL)attachProtectedDatabaseWithName:(id)a0 url:(id)a1 error:(id *)a2;
- (BOOL)detachProtectedDatabase;
- (BOOL)executeInsertStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (void)setIsWriter:(BOOL)a0;
- (BOOL)executeUpsertStatement:(id)a0 error:(id *)a1;
- (BOOL)detachJournalDatabase;
- (BOOL)tableExists:(id)a0 inDatabase:(id)a1;
- (BOOL)columnExists:(id)a0 inTable:(id)a1 database:(id)a2 type:(unsigned long long *)a3;
- (BOOL)attachProtectedDatabaseWithName:(id)a0 error:(id *)a1;
- (BOOL)attachJournalDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
- (id)initForInMemoryDatabaseIsWriter:(BOOL)a0 delegate:(id)a1;
- (id)initWithSQLDB:(struct sqlite3 { } *)a0 isWriter:(BOOL)a1 delegate:(id)a2;
- (BOOL)executeUpsertStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (BOOL)executeDeleteStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (void)clearLastInsertedDatabaseID;
- (BOOL)attachProtectedDatabaseWithName:(id)a0;
- (BOOL)attachJournalDatabase:(id)a0 withName:(id)a1;

@end
