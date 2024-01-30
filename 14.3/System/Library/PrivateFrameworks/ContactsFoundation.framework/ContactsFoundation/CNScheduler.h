@protocol CNScheduler;

@interface CNScheduler : NSObject

@property (class, readonly) id<CNScheduler> immediateScheduler;
@property (class, readonly) id<CNScheduler> globalAsyncScheduler;
@property (class, readonly) id<CNScheduler> mainThreadScheduler;
@property (class, readonly) id<CNScheduler> offMainThreadScheduler;
@property (class, readonly) id<CNScheduler> inlineScheduler;

+ (id)offMainThreadSchedulerWithBackgroundScheduler:(id)a0;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)synchronousSerialDispatchQueueWithName:(id)a0;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;

@end
