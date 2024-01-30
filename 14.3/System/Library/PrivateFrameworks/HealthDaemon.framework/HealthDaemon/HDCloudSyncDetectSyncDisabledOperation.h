@interface HDCloudSyncDetectSyncDisabledOperation : HDCloudSyncOperation

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void)_disableSyncLocally;

@end
