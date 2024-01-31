@interface CXDatabaseStatement : NSObject

@property (nonatomic) struct sqlite3_stmt { } *statement;
@property (nonatomic) struct sqlite3 { } *database;

- (id)init;
- (void)dealloc;
- (BOOL)bindInt64:(long long)a0 atIndex:(int)a1 error:(id *)a2;
- (void)finalize;
- (BOOL)executeWithError:(id *)a0;
- (BOOL)processResultsWithExpectedColumnCount:(long long)a0 resultRowHandler:(id /* block */)a1 error:(id *)a2;
- (BOOL)bindText:(const char *)a0 ofLength:(int)a1 atIndex:(int)a2 error:(id *)a3;
- (BOOL)executeWithExpectedColumnCount:(long long)a0 resultRowHandler:(id /* block */)a1 error:(id *)a2;
- (id)initWithSQL:(id)a0 database:(id)a1 error:(id *)a2;
- (BOOL)bind:(id)a0 error:(id *)a1;

@end
