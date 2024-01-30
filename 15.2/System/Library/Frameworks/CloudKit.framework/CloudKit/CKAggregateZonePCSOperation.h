@class CKAggregateZonePCSOperationInfo, NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

@property (readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *sourceZoneIDs;
@property (copy, nonatomic) CKRecordZone *targetZone;
@property (copy, nonatomic) id /* block */ aggregateZonePCSCompletionBlock;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithSourceZoneIDs:(id)a0 targetZone:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
