@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {
    void *_ICUSearchContext;
    _MFSearchMatcherContext *_CPSearchContext;
}

- (void)_handleIOError;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (void).cxx_destruct;
- (int)configureSQLConnection;
- (void)_logFileSystemStats;
- (void)dealloc;
- (void)_handleProtectedDataIOError;
- (long long)transactionTypeForWriting;
- (void)_handleBusyError;
- (void)_handleDetachedDatabaseIOError;
- (void)_handleCorruptDatabase;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (void)_handleInvalidDatabaseIOError;
- (void)_handleFullDatabase;

@end
