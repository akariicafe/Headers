@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation

- (BOOL)_execute:(id *)a0;
- (unsigned long long)type;
- (BOOL)_executeStatements:(id)a0 onConnection:(id)a1 withError:(id *)a2;

@end
