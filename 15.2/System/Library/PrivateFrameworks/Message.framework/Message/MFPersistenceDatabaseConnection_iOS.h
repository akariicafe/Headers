@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {
    void *_ICUSearchContext;
    _MFSearchMatcherContext *_CPSearchContext;
}

- (void)handleSQLResult:(int)a0 message:(id)a1;
- (void)_logFileSystemStats;
- (void)_handleInvalidDatabaseIOError;
- (void)_handleBusyError;
- (void).cxx_destruct;
- (long long)transactionTypeForWriting;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (void)_handleIOError;
- (void)_handleDetachedDatabaseIOError;
- (void)_handleCorruptDatabase;
- (void)_handleFullDatabase;
- (int)configureSQLConnection;
- (void)dealloc;
- (void)_handleProtectedDataIOError;

@end
