@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NNMKSQLiteConnection : NSObject

@property (nonatomic) struct sqlite3 { } *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) BOOL isInTransaction;
@property (retain, nonatomic) NSString *databasePath;
@property (retain, nonatomic) NSMutableDictionary *cachedPreparedStatementsBySQLPattern;

+ (BOOL)errorCodeMeansCorruptedDatabase:(int)a0;

- (BOOL)beginTransaction;
- (void).cxx_destruct;
- (int)_executeSQL:(id)a0;
- (BOOL)rollbackTransaction;
- (void)dealloc;
- (int)lastErrorCode;
- (int)executeSQL:(id)a0;
- (void)_closeDatabase;
- (id)lastErrorMessage;
- (BOOL)commitTransaction;
- (int)_lastErrorCode;
- (BOOL)tableExists:(id)a0 inDatabase:(id)a1;
- (id)initWithPath:(id)a0 errorCode:(int *)a1;
- (struct sqlite3_stmt { } *)preparedStatementForPattern:(id)a0;
- (int)stepPreparedStatement:(struct sqlite3_stmt { } *)a0;
- (BOOL)_openDatabaseWithPath:(id)a0 errorCode:(int *)a1;
- (struct sqlite3_stmt { } *)preparedStatementForPattern:(id)a0 cacheStatement:(BOOL)a1;
- (struct sqlite3_stmt { } *)_preparedStatementForPattern:(id)a0 cacheStatement:(BOOL)a1;
- (int)_stepPreparedStatement:(struct sqlite3_stmt { } *)a0;
- (id)_lastErrorMessage;
- (int)_runRetryingIfNeeded:(id /* block */)a0;

@end
