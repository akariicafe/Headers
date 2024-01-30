@class NSBatchInsertRequest;

@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (readonly, nonatomic) NSBatchInsertRequest *request;

- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;

@end
