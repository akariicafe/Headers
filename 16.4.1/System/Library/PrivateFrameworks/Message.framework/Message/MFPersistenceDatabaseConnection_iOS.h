@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection {
    void *_ICUSearchContext;
    _MFSearchMatcherContext *_CPSearchContext;
}

- (long long)transactionTypeForWriting;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (void)dealloc;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (int)configureSQLConnection;
- (void).cxx_destruct;

@end
