@interface _HDSQLiteStatementCacheStorage : NSObject {
    _HDSQLiteStatementCacheStorage *_parentStorage;
    struct __CFDictionary { } *_statementsBySQL;
    struct __CFDictionary { } *_statementsByKey;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
