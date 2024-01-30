@class NSURL, NSMutableDictionary;

@interface CXDatabase : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct sqlite3 { } *database;
@property (retain, nonatomic) NSMutableDictionary *sqlQueryToStatements;
@property (readonly, nonatomic) long long lastInsertedRowID;
@property (readonly, nonatomic) int countOfRecordsModifiedByLastQuery;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 error:(id *)a2;
- (void)dealloc;
- (id)namesOfColumnsInTableWithName:(id)a0 error:(id *)a1;
- (BOOL)selectSQL:(id)a0 withBindings:(id)a1 expectedColumnCount:(long long)a2 resultRowHandler:(id /* block */)a3 error:(id *)a4;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)beginTransactionWithError:(id *)a0;
- (id)description;
- (id)_statementForSQL:(id)a0 transient:(BOOL)a1 error:(id *)a2;
- (BOOL)enableForeignKeysWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 error:(id *)a1;
- (BOOL)vacuumWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 withStatementPreparationBlock:(id /* block */)a1 transient:(BOOL)a2 error:(id *)a3;
- (BOOL)setBusyTimeout:(double)a0 error:(id *)a1;
- (BOOL)executeSQL:(id)a0 withStatementPreparationBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)executeSQL:(id)a0 withBindings:(id)a1 error:(id *)a2;
- (BOOL)executeSQL:(id)a0 withBindings:(id)a1 transient:(BOOL)a2 error:(id *)a3;
- (BOOL)performTransactionWithBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)selectSQL:(id)a0 withBindings:(id)a1 expectedColumnCount:(long long)a2 transient:(BOOL)a3 resultRowHandler:(id /* block */)a4 error:(id *)a5;

@end
