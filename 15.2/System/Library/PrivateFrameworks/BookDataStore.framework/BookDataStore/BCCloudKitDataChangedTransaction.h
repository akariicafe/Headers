@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction

@property (copy, nonatomic) NSString *notificationName;

+ (id)transactionNameForEntityName:(id)a0;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (void)performWorkWithCompletion:(id /* block */)a0;
- (id)initWithEntityName:(id)a0 notificationName:(id)a1 delegate:(id)a2;

@end
