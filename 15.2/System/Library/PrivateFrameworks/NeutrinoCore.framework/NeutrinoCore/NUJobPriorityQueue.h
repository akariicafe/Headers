@class NSString, NUJobQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject {
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSString *_currentlyExecutingJobName;
    BOOL _isRunning;
}

@property (readonly) NSString *name;
@property (readonly) long long count;

- (BOOL)removeJob:(id)a0;
- (void)addJob:(id)a0;
- (id)_popJob;
- (void)_startRunning;
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;
- (id)popJob;
- (BOOL)_removeJob:(id)a0;
- (id)description;
- (void)_sort;
- (BOOL)start;
- (void)_addJob:(id)a0;
- (BOOL)_runNextJob;
- (void).cxx_destruct;
- (id)init;
- (void)_run;
- (void)_sortIfNeeded;

@end
