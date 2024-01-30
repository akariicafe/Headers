@class HKMultiTypeQueryCursor;

@interface HDMultiTypeSampleQueryServer : HDQueryServer {
    unsigned long long _deliveredResultCount;
    HKMultiTypeQueryCursor *_queryCursor;
    unsigned long long _limit;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_handleBatchedQueryResult:(long long)a0 error:(id)a1;
- (void)_queue_deliverSamples:(id)a0 queryCursor:(id)a1 deliverResults:(BOOL)a2;
- (long long)batchObjectsWithError:(id *)a0 batchHandler:(id /* block */)a1;
- (id)queryCursorWithState:(id)a0;
- (id)queryClient;
- (BOOL)isQueryingForHealthRecordsTypes;

@end
