@interface FCTaskScheduler : NSObject

+ (void)popHighPriorityTaskInFlight;
+ (id)lowPriorityOperationQueue;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (id)backgroundDownloadOperationQueue;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)disableOptionalPrefetching;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)pushHighPriorityTaskInFlight;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (id)lowPriorityQueue;

@end
