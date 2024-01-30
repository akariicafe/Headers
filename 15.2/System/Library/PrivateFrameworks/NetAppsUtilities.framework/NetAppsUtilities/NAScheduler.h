@interface NAScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)immediateScheduler;
+ (id)globalAsyncScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
