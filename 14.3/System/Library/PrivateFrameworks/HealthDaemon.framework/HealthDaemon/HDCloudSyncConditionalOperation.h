@class HDCloudSyncOperation;

@interface HDCloudSyncConditionalOperation : HDCloudSyncOperation

@property (retain) HDCloudSyncOperation *operation;
@property (copy) id /* block */ shouldRunHandler;

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;

- (void).cxx_destruct;
- (void)main;
- (id)description;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 operation:(id)a2 shouldRunHandler:(id /* block */)a3;

@end
