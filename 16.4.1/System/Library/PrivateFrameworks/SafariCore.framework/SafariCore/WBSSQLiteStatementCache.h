@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (id)initWithDatabase:(id)a0;
- (id)_createStatementForQuery:(id)a0 error:(id *)a1;
- (id)cachedStatementForQuery:(id)a0;
- (void)dealloc;
- (id)statementForQuery:(id)a0 error:(id *)a1;
- (id)init;
- (void)invalidate;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (void).cxx_destruct;

@end
