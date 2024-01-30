@interface PLSQLiteDatabase : NSObject {
    struct sqlite3 { } *_database;
}

+ (id)openDatabaseAtPath:(id)a0;
+ (struct sqlite3 { } *)_openSQLiteDatabaseAtPath:(const char *)a0;

- (BOOL)_execute:(id)a0;
- (BOOL)close;
- (BOOL)beginExclusiveTransaction;
- (BOOL)rollbackTransaction;
- (struct sqlite3_stmt { } *)_prepareStatement:(id)a0;
- (BOOL)beginDeferredTransaction;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 { } *)a0;
- (BOOL)prepareAndEvaluateStatement:(id)a0;
- (BOOL)prepareStatement:(id)a0 andStepThroughResultsWithBlock:(id /* block */)a1;
- (BOOL)commitTransaction;

@end
