@interface HDCloudSyncUpdateLocalAnchorsOperation : HDCloudSyncOperation

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (BOOL)_updateExpectedSyncAnchorsForTarget:(id)a0 error:(id *)a1;
- (BOOL)_updateFrozenAnchorsForTarget:(id)a0 error:(id *)a1;
- (BOOL)_queue_updateExpectedSyncAnchorsForTarget:(id)a0 sequenceHeader:(id)a1 error:(id *)a2;

@end
