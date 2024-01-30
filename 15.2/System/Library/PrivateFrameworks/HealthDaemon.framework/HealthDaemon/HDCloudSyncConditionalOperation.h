@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;
@property (copy) id /* block */ shouldRunHandler;

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)description;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2 shouldRunHandler:(id /* block */)a3;

@end
