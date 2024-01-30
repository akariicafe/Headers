@interface FCTaskScheduler : NSObject

+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)pushHighPriorityTaskInFlight;
+ (id)backgroundDownloadOperationQueue;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)disableOptionalPrefetching;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (id)lowPriorityQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (id)lowPriorityOperationQueue;

@end
