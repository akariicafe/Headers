@interface FCTaskScheduler : NSObject

+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (void)disableOptionalPrefetching;
+ (id)lowPriorityQueue;
+ (void)scheduleLowPriorityOperation:(id)a0;
+ (id)lowPriorityOperationQueue;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)popHighPriorityTaskInFlight;
+ (id)backgroundDownloadOperationQueue;

@end
