@interface CKVSQLiteCachedStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;
- (void)dealloc;
- (id)init;
- (struct sqlite3_stmt { } *)stmt;

@end
