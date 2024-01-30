@interface PLSQLiteDatabase : NSObject {
    struct sqlite3 { } *_database;
}

+ (id)openDatabaseAtPath:(id)a0 capabilities:(id)a1;
+ (struct sqlite3 { } *)_openSQLiteDatabaseAtPath:(const char *)a0 capabilities:(id)a1;
+ (int)dataProtectionOpenFlagForPath:(id)a0;
+ (int)dataProtectionOpenFlagForCapabilities:(id)a0;

- (BOOL)close;
- (BOOL)rollbackTransaction;
- (BOOL)commitTransaction;
- (BOOL)beginExclusiveTransaction;
- (BOOL)prepareStatement:(id)a0 andStepThroughResultsWithBlock:(id /* block */)a1;
- (BOOL)prepareAndEvaluateStatement:(id)a0;
- (BOOL)_execute:(id)a0;
- (BOOL)beginDeferredTransaction;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 { } *)a0;
- (struct sqlite3_stmt { } *)_prepareStatement:(id)a0;

@end
