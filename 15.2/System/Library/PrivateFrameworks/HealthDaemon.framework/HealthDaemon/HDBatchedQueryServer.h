@interface HDBatchedQueryServer : HDQueryServer

@property (copy, nonatomic) id /* block */ unitTest_queryServerObjectEnumerationHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerWillSendBatchHandler;

- (void).cxx_destruct;
- (long long)batchObjectsWithEnumerator:(id)a0 includeDeletedObjects:(BOOL)a1 error:(id *)a2 batchHandler:(id /* block */)a3;
- (long long)batchObjectsWithEnumerator:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (long long)batchObjectsWithMultitypeQueryCursor:(id)a0 includeDeletedObjects:(BOOL)a1 limit:(unsigned long long)a2 error:(id *)a3 batchHandler:(id /* block */)a4;

@end
