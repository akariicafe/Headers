@class NSURL;

@interface ENSQLiteConnection : NSObject {
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_statementCache;
    BOOL _isInTransaction;
}

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) long long lastInsertedRowID;
@property (nonatomic) int additionalOpenFlags;

- (id)initWithDatabaseURL:(id)a0;
- (int)openWithError:(id *)a0;
- (BOOL)performTransactionWithType:(long long)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (void)close;
- (BOOL)executeSQL:(id)a0 error:(id *)a1 bindingHandler:(id /* block */)a2 enumerationHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)executeUncachedSQL:(id)a0 error:(id *)a1;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (id)_initWithDatabaseURL:(id)a0;
- (id)_lastErrorWithResultCode:(int)a0;
- (BOOL)_executeSQL:(id)a0 cacheStatement:(BOOL)a1 error:(id *)a2 bindingHandler:(id /* block */)a3 enumerationHandler:(id /* block */)a4;
- (BOOL)_stepStatement:(struct sqlite3_stmt { } *)a0 hasRow:(BOOL *)a1 error:(id *)a2;
- (BOOL)_prepareStatementForSQL:(id)a0 cache:(BOOL)a1 error:(id *)a2 statementHandler:(id /* block */)a3;
- (BOOL)setIntegerValue:(long long)a0 forPragma:(id)a1 error:(id *)a2;
- (BOOL)getIntegerValue:(long long *)a0 forPragma:(id)a1 error:(id *)a2;
- (BOOL)executeUncachedSQLStatements:(id)a0 error:(id *)a1;
- (BOOL)setUserVersion:(long long)a0 error:(id *)a1;
- (BOOL)getUserVersion:(long long *)a0 error:(id *)a1;
- (BOOL)truncateWithError:(id *)a0;

@end
