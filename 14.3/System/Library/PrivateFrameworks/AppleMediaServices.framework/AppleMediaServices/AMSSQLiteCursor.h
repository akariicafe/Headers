@class NSDictionary, AMSSQLiteStatement;

@interface AMSSQLiteCursor : NSObject {
    NSDictionary *_columnIndexByName;
    struct sqlite3_stmt { } *_statement;
    AMSSQLiteStatement *_statementWrapper;
}

@property (readonly, nonatomic) long long numberOfColumns;

- (void).cxx_destruct;
- (double)doubleForColumnIndex:(int)a0;
- (id)URLForColumnIndex:(int)a0;
- (int)intForColumnName:(id)a0;
- (id)URLForColumnName:(id)a0;
- (int)_columnTypeForColumnIndex:(int)a0;
- (id)stringForColumnName:(id)a0;
- (id)numberForColumnName:(id)a0;
- (long long)int64ForColumnName:(id)a0;
- (id)stringForColumnIndex:(int)a0;
- (long long)int64ForColumnIndex:(int)a0;
- (int)columnIndexForColumnName:(id)a0;
- (id)initWithStatement:(id)a0;
- (id)dateForColumnIndex:(int)a0;
- (id)numberForColumnIndex:(int)a0;
- (double)doubleForColumnName:(id)a0;
- (int)intForColumnIndex:(int)a0;
- (id)dataForColumnName:(id)a0;
- (id)dateForColumnName:(id)a0;
- (id)dataForColumnIndex:(int)a0;

@end
