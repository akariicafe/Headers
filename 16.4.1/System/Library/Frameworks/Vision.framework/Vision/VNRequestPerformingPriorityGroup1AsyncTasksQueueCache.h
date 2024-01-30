@interface VNRequestPerformingPriorityGroup1AsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
+ (id)queueLabelWithUniqueAppendix:(id)a0;

@end
