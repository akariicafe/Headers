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

- (id)_prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (void)_finalizeAllStatements;
- (void)performTransaction:(id /* block */)a0;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)setUserVersion:(id)a0;
- (void)dispatchAfterTransaction:(id /* block */)a0;
- (BOOL)close;
- (id)initWithOptions:(id)a0;
- (BOOL)truncate;
- (BOOL)_close;
- (BOOL)resetAfterCorruptionError;
- (BOOL)open;
- (BOOL)_performResetAfterCorruptionError;
- (BOOL)_executeStatement:(id)a0 error:(id *)a1;
- (void)executeQuery:(id)a0 withResults:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_statementForPreparedStatement:(id)a0 error:(id *)a1;
- (BOOL)executePreparedStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (void)executePreparedQuery:(id)a0 withResults:(id /* block */)a1;
- (id)prepareStatement:(id)a0 error:(id *)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1 bindings:(id /* block */)a2;
- (BOOL)_open;
- (id)_verifiedStatementForSQL:(id)a0 error:(id *)a1;
- (id)_verifiedStatementForPreparedStatement:(id)a0 error:(id *)a1;
- (void)_flushAfterTransactionBlocks;
- (BOOL)resetAfterIOError;

@end
