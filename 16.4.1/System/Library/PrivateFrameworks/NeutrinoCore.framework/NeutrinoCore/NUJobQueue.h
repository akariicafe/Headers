@class NSString, NUJobPriorityQueue, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NUJobPriorityQueue *_interactiveQueue;
    NUJobPriorityQueue *_initiatedQueue;
    long long _updateGroupLevel;
    NSString *_name;
}

@property (readonly) long long stage;

- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (void)_incrementGroupLevel;
- (void)removeJob:(id)a0;
- (void)finishedPriorityQueue:(id)a0;
- (void)_finishedPriorityQueue:(id)a0;
- (void)_decrementGroupLevel;
- (void)_removeJob:(id)a0;
- (void)_addJobs:(id)a0;
- (void)addJobs:(id)a0;
- (id)initWithStage:(long long)a0 name:(id)a1;
- (id)debugDescription;
- (void)_startRunningIfNeeded;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
