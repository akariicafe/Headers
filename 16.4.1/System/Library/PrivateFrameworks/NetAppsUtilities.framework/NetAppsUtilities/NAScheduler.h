@interface NAScheduler : NSObject

+ (id)mainThreadScheduler;
+ (id)immediateScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)a0;
+ (id)globalAsyncScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
