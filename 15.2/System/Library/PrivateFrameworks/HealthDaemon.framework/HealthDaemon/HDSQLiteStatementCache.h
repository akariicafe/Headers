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

- (id)initWithDatabase:(struct sqlite3 { } *)a0;
- (void)beginTransaction;
- (void)endTransaction;
- (void)clearCachedStatements;
- (struct sqlite3_stmt { } *)checkOutStatementForSQL:(id)a0 shouldCache:(BOOL)a1 error:(id *)a2;
- (void)checkInStatement:(struct sqlite3_stmt { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct sqlite3_stmt { } *)checkOutCachedStatementForKey:(const char *)a0 SQLGenerator:(id /* block */)a1 error:(id *)a2;

@end
