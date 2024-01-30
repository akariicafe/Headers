@interface VNRequestAsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
+ (id)queueLabelWithUniqueAppendix:(id)a0;

@end
