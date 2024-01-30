@interface HDCloudSyncSynchronousOperation : HDCloudSyncOperation

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;

- (void)main;
- (BOOL)performWithError:(id *)a0;

@end
