@class HDCloudSyncOperation;

@interface HDCloudSyncIgnoredErrorsOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;
+ (BOOL)shouldLogAtOperationEnd;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)description;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2;
- (void).cxx_destruct;

@end
