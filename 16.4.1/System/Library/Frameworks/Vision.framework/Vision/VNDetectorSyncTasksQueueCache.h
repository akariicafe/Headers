@interface VNDetectorSyncTasksQueueCache : VNSyncTasksQueueCache

+ (id)sharedCache;
+ (long long)maximumAllowedTasksInTheQueue;
+ (id)queueLabelWithUniqueAppendix:(id)a0;

@end
