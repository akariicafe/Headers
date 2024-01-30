@interface NSSQLBatchInsertRequestContext : NSSQLBatchOperationRequestContext

- (BOOL)isWritingRequest;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;

@end
