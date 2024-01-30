@class HDCloudSyncOperation;

@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationEnd;

- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2;

@end
