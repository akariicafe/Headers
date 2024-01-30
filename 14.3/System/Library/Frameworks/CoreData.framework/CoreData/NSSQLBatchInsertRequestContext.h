@class NSBatchInsertRequest;

@interface NSSQLBatchInsertRequestContext : NSSQLStoreRequestContext

@property (readonly, nonatomic) NSBatchInsertRequest *request;

- (id)dropObjectIDCaptureStatements;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;
- (id)createObjectIDCaptureStatements;
- (id)tempTableName;

@end
