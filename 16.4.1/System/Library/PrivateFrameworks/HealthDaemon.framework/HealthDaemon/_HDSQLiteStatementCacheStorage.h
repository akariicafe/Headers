@interface _HDSQLiteStatementCacheStorage : NSObject {
    _HDSQLiteStatementCacheStorage *_parentStorage;
    struct __CFDictionary { } *_statementsBySQL;
    struct __CFDictionary { } *_statementsByKey;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
