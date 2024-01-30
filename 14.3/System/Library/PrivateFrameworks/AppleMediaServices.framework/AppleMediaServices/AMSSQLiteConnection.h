@class NSMapTable, NSError, NSMutableArray, AMSSQLiteConnectionOptions;
@protocol AMSSQLiteConnectionDelegate;

@interface AMSSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) AMSSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<AMSSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;

- (id)initWithOptions:(id)a0;
- (BOOL)executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)close;
- (void).cxx_destruct;
- (BOOL)finalizePreparedStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (void)dealloc;
- (BOOL)_resetAfterIOError;
- (BOOL)_executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (void)performTransaction:(id /* block */)a0;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)_open;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (BOOL)_close;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)open;
- (BOOL)_performResetAfterCorruptionError;
- (BOOL)_resetAfterCorruptionError;
- (void)_finalizeAllStatements;
- (BOOL)truncate;
- (void)_flushAfterTransactionBlocks;
- (BOOL)_openAndAllowRetry:(BOOL)a0;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (id)prepareStatement:(id)a0 error:(id *)a1;

@end
