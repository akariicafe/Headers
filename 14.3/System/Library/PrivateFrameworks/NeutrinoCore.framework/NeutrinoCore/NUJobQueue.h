@class NUJobPriorityQueue, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_interactiveQueue;
    NUJobPriorityQueue *_initiatedQueue;
    long long _updateGroupLevel;
}

@property (readonly) long long stage;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)addJobs:(id)a0;
- (void)removeJob:(id)a0;
- (void)_removeJob:(id)a0;
- (id)initWithStage:(long long)a0;
- (void)_addJobs:(id)a0;
- (void)_incrementGroupLevel;
- (void)_decrementGroupLevel;
- (void)_startRunningIfNeeded;
- (void)finishedPriorityQueue:(id)a0;
- (void)_finishedPriorityQueue:(id)a0;

@end
