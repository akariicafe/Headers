@class NSString, CKSQLite, NSError, NSMutableArray;

@interface CKSQLiteStatement : NSObject {
    BOOL _reset;
    CKSQLite *_SQLite;
    NSString *_SQL;
    struct sqlite3_stmt { } *_handle;
    NSError *_error;
    NSMutableArray *_temporaryBoundObjects;
}

- (void).cxx_destruct;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void)invalidate:(id)a0;

@end
