@class NWUsageTargetSelector, NWUsageManager, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface NWPollHandler : NSObject {
    NSMutableArray *_batchedSnapshots[10];
    _Atomic unsigned long long _batchesOutstanding;
    unsigned int _producerSeqno;
    unsigned int _consumerSeqno;
    BOOL _active;
}

@property (retain) NWUsageTargetSelector *flowSelector;
@property (copy) id /* block */ deliveryBlock;
@property (copy) id /* block */ completionBlock;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) unsigned long long ntstatContext;
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL shouldRestartPoll;
@property (retain) NWUsageManager *manager;

- (void)shutdown;
- (id)init;
- (void).cxx_destruct;
- (void)_dispatchNextBatch;
- (void)decrementBatchCount;
- (id)nextDelivery;
- (id)description;
- (void)handleSnapshot:(id)a0;
- (void)pushCurrentSnapshots:(BOOL)a0;

@end
