@interface TSUDatabase : NSObject {
    struct sqlite3_stmt { } *_beginTransactionStatement;
    struct sqlite3_stmt { } *_commitTransactionStatement;
    struct sqlite3_stmt { } *_rollbackTransactionStatement;
}

@property (readonly, nonatomic) struct sqlite3 { } *_sqliteDatabase;
@property (readonly, nonatomic) BOOL readonly;

- (BOOL)closeWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)compactWithError:(id *)a0;
- (void)dealloc;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)_initWithPath:(id)a0 readonly:(BOOL)a1 error:(id *)a2;
- (BOOL)upgradeFromSchemaVersion:(int)a0 error:(id *)a1;
- (BOOL)_upgradeSchemaWithError:(id *)a0;
- (BOOL)endSingleResultQuery:(struct sqlite3_stmt { } *)a0 shouldFinalize:(BOOL)a1 error:(id *)a2;
- (BOOL)executeUpdate:(struct sqlite3_stmt { } *)a0 shouldFinalize:(BOOL)a1 error:(id *)a2;
- (BOOL)executeUpdateWithSql:(const char *)a0 error:(id *)a1;
- (id)initReadonlyWithPath:(id)a0 error:(id *)a1;
- (BOOL)needsUpgradeFromSchemaVersion:(int)a0;
- (BOOL)prepareStatement:(struct sqlite3_stmt **)a0 sql:(const char *)a1 error:(id *)a2;
- (BOOL)setSchemaVersion:(int)a0 error:(id *)a1;
- (BOOL)startSingleResultQuery:(struct sqlite3_stmt { } *)a0 error:(id *)a1;

@end
