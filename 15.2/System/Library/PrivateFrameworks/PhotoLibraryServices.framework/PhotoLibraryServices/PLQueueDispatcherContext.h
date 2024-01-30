@class _PLQueueDispatcherQueueTrackingStats;

@interface PLQueueDispatcherContext : NSManagedObjectContext {
    _PLQueueDispatcherQueueTrackingStats *_pl_stats;
}

- (id)initWithConcurrencyType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)pl_queueDispatcherTrackingStats;

@end
