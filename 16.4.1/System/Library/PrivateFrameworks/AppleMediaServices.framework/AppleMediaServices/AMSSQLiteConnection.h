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

- (BOOL)_open;
- (BOOL)truncate;
- (BOOL)_close;
- (void)performTransaction:(id /* block */)a0;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (void)_flushAfterTransactionBlocks;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)finalizePreparedStatement:(id)a0 error:(id *)a1;
- (void)_finalizeAllStatements;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)open;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)_openAndAllowRetry:(BOOL)a0;
- (void)dealloc;
- (BOOL)executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (BOOL)_executeWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (BOOL)close;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)_performResetAfterCorruptionError;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)_resetAfterCorruptionError;
- (BOOL)_resetAfterIOError;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;

@end
