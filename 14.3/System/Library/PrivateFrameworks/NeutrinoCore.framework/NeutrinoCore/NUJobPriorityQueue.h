@class NSString, NUJobQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NUJobPriorityQueue : NSObject {
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _isRunning;
}

@property (readonly) NSString *name;
@property (readonly) long long count;

- (void)_sortIfNeeded;
- (void)_run;
- (id)init;
- (void).cxx_destruct;
- (void)_sort;
- (id)popJob;
- (id)description;
- (id)_popJob;
- (BOOL)start;
- (void)addJob:(id)a0;
- (void)_addJob:(id)a0;
- (id)initWithName:(id)a0 owner:(id)a1 qos:(unsigned int)a2;
- (BOOL)removeJob:(id)a0;
- (BOOL)_removeJob:(id)a0;
- (void)_startRunning;
- (BOOL)_runNextJob;

@end
