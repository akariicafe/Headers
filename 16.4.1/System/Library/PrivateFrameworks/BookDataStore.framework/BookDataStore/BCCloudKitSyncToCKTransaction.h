@class BCCloudDataSyncManager;

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction

@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;

+ (id)transactionNameForEntityName:(id)a0;

- (double)coalescingDelay;
- (void).cxx_destruct;
- (id)initWithEntityName:(id)a0 syncManager:(id)a1 delegate:(id)a2;
- (void)performWorkWithCompletion:(id /* block */)a0;
- (double)transactionLifetimeTimout;

@end
