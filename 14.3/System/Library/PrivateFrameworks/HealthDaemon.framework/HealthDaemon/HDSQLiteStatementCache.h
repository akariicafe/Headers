@class NSSet, _HDSQLiteStatementCacheStorage;

@interface HDSQLiteStatementCache : NSObject {
    struct sqlite3 { } *_db;
    _HDSQLiteStatementCacheStorage *_defaultStatementStorage;
    _HDSQLiteStatementCacheStorage *_transactionStatementStorage;
    struct __CFSet { } *_activeStatements;
    struct __CFSet { } *_uncachedActiveStatements;
    BOOL _inTransaction;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long faultCount;
@property (readonly, copy, nonatomic) NSSet *allStatmentSQLStrings;

- (void)beginTransaction;
- (void)endTransaction;
- (void)_activateStatement:(struct sqlite3_stmt { } *)a0 cached:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (struct sqlite3_stmt { } *)_prepareStatementForSQL:(id)a0 error:(id *)a1;
- (void)_setCachedStatement:(struct sqlite3_stmt { } *)a0 forSQL:(id)a1;
- (void)clearCachedStatements;
- (id)initWithDatabase:(struct sqlite3 { } *)a0;
- (struct sqlite3_stmt { } *)checkOutCachedStatementForKey:(const char *)a0 SQLGenerator:(id /* block */)a1 error:(id *)a2;
- (void)_setCachedStatement:(struct sqlite3_stmt { } *)a0 forKey:(const char *)a1;
- (id)_statementStorage;
- (struct sqlite3_stmt { } *)checkOutStatementForSQL:(id)a0 shouldCache:(BOOL)a1 error:(id *)a2;
- (void)_assertNoActiveStatements;
- (void)checkInStatement:(struct sqlite3_stmt { } *)a0;
- (struct sqlite3_stmt { } *)_cachedStatementForKey:(const char *)a0 active:(BOOL *)a1;
- (struct sqlite3_stmt { } *)_cachedStatementForSQL:(id)a0 active:(BOOL *)a1;

@end
