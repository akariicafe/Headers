@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction

@property (copy, nonatomic) NSString *notificationName;

+ (id)transactionNameForEntityName:(id)a0;

- (double)coalescingDelay;
- (void).cxx_destruct;
- (id)initWithEntityName:(id)a0 notificationName:(id)a1 delegate:(id)a2;
- (void)performWorkWithCompletion:(id /* block */)a0;

@end
