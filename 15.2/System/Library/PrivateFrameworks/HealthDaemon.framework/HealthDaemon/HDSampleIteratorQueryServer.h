@class HKSampleIteratorQueryCursor;

@interface HDSampleIteratorQueryServer : HDBatchedQueryServer {
    unsigned long long _deliveredResultCount;
    HKSampleIteratorQueryCursor *_queryCursor;
    unsigned long long _limit;
}

+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (BOOL)supportsAnchorBasedAuthorization;
+ (Class)queryClass;

- (id)objectTypes;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;

@end
