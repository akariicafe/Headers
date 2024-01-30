@interface NAScheduler : NSObject

+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;
+ (id)mainThreadScheduler;
+ (id)globalAsyncScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(unsigned long long)a0;
+ (id)immediateScheduler;

@end
