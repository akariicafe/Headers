@protocol EFScheduler;

@interface EFScheduler : NSObject

@property (class, readonly) id<EFScheduler> immediateScheduler;
@property (class, readonly) id<EFScheduler> globalAsyncScheduler;
@property (class, readonly) id<EFScheduler> mainThreadScheduler;

+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)dispatchQueueSchedulerWithQueue:(id)a0;
+ (id)globalAsyncSchedulerWithQualityOfService:(long long)a0;
+ (id)onScheduler:(id)a0 performWithObject:(id)a1;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0 qualityOfService:(long long)a1;
+ (id)_globalAsyncSchedulerWithQualityOfService:(long long)a0;

@end
