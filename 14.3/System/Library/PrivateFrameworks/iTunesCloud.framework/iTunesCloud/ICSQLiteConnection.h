@class NSMutableArray, NSMapTable, NSError, ICSQLiteConnectionOptions, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject {
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 { } *_database;
    BOOL _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    BOOL _transactionWantsRollback;
}

@property (readonly, copy, nonatomic) NSError *currentError;
@property (readonly, copy, nonatomic) ICSQLiteConnectionOptions *options;
@property (weak, nonatomic) id<ICSQLiteConnectionDelegate> delegate;
@property (readonly, nonatomic) long long lastChangeCount;
@property (readonly, copy, nonatomic) NSNumber *userVersion;

- (id)initWithOptions:(id)a0;
- (BOOL)setUserVersion:(id)a0;
- (BOOL)close;
- (void).cxx_destruct;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (BOOL)resetAfterCorruptionError;
- (BOOL)resetAfterIOError;
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
- (void)_finalizeAllStatements;
- (BOOL)truncate;
- (void)_flushAfterTransactionBlocks;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (id)prepareStatement:(id)a0 error:(id *)a1;

@end
