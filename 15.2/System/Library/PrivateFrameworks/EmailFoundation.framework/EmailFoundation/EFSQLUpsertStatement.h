@class NSString, EFSQLUpdateStatement, NSArray, EFSQLInsertStatement;
@protocol EFSQLInsertStatementValue, EFSQLValueExpressable, EFSQLUpdateStatementValue;

@interface EFSQLUpsertStatement : NSObject {
    EFSQLInsertStatement *_insertStatement;
    EFSQLUpdateStatement *_updateStatement;
    NSArray *_conflictTarget;
}

@property (readonly, nonatomic) id<EFSQLInsertStatementValue> insertValue;
@property (readonly, nonatomic) id<EFSQLUpdateStatementValue> updateValue;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) id<EFSQLValueExpressable> whereClause;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)excludedColumnExpressionForColumnName:(id)a0;
- (id)initWithTable:(id)a0 conflictTarget:(id)a1;

@end
