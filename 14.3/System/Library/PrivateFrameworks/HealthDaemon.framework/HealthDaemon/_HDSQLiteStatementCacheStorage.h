@class NSArray;

@interface _HDSQLiteStatementCacheStorage : NSObject {
    _HDSQLiteStatementCacheStorage *_parentStorage;
    struct __CFDictionary { } *_statementsBySQL;
    struct __CFDictionary { } *_statementsByKey;
}

@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSArray *allStatementSQLStrings;

- (id)init;
- (void)setStatement:(struct sqlite3_stmt { } *)a0 forSQL:(id)a1;
- (void)setStatement:(struct sqlite3_stmt { } *)a0 forKey:(const char *)a1;
- (void).cxx_destruct;
- (id)initWithParentStorage:(id)a0;
- (void)clearStatements;
- (void)dealloc;
- (struct sqlite3_stmt { } *)statementForSQL:(id)a0;
- (struct sqlite3_stmt { } *)statementForKey:(const char *)a0;

@end
