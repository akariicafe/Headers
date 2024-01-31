@class CKSQLiteTable, NSString, NSError, CKSQLiteCompiledStatement;

@interface CKSQLiteTableSearchResultEnumerator : NSEnumerator {
    CKSQLiteTable *_table;
    NSString *_groupName;
    NSString *_tableName;
    id _entry;
    BOOL _enumerationStarted;
}

@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (retain, nonatomic) CKSQLiteCompiledStatement *statement;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (id)nextObject;
- (void)invalidate;
- (id)cksqlcs_appendSQLConstantValueToString:(id)a0;
- (id)currentObject;
- (void).cxx_destruct;
- (id)initWithTable:(id)a0 statement:(id)a1;

@end
