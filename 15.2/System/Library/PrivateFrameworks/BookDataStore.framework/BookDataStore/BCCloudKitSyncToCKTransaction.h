@class BCCloudDataSyncManager;

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction

@property (retain, nonatomic) BCCloudDataSyncManager *syncManager;

+ (id)transactionNameForEntityName:(id)a0;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (void)performWorkWithCompletion:(id /* block */)a0;
- (double)transactionLifetimeTimout;
- (id)initWithEntityName:(id)a0 syncManager:(id)a1 delegate:(id)a2;

@end
