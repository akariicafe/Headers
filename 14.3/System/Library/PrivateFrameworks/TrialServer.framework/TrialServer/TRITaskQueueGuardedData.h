@class NSMutableDictionary, NSDate;
@protocol TRITaskPersisting;

@interface TRITaskQueueGuardedData : NSObject {
    BOOL stopRequested;
    id<TRITaskPersisting> taskStore;
    NSMutableDictionary *queuedTasks;
    NSDate *nextScheduledTaskStartTime;
    unsigned long long currentCapabilities;
    NSMutableDictionary *xpcDescriptorToState;
    id /* block */ taskQueueCompletionBlock;
}

- (void).cxx_destruct;

@end
