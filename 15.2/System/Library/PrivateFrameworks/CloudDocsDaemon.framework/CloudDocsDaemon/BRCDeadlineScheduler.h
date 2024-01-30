@class BRCMinHeap, NSString, BRCFairSource, NSObject, BRCFairScheduler;
@protocol OS_dispatch_source, OS_dispatch_workloop;

@interface BRCDeadlineScheduler : NSObject <BRCLifeCycle, BRCSuspendable> {
    NSObject<OS_dispatch_workloop> *_workloop;
    BRCMinHeap *_minHeap;
    NSString *_name;
    BRCFairSource *_source;
    NSObject<OS_dispatch_source> *_delay;
    long long _lastSchedule;
    BOOL _isResumed;
}

@property (readonly, nonatomic) BRCFairScheduler *fairScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (nonatomic) long long coalescingLeeway;
@property (copy, nonatomic) id /* block */ computeNextAdmissibleDateForScheduling;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)signal;
- (void)close;
- (void)_close;
- (void)_schedule;
- (void)addSource:(id)a0 deadline:(long long)a1;
- (id)initWithName:(id)a0 fairScheduler:(id)a1;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)runDeadlineSource:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancel;
- (BOOL)_setupTimerRequiredForDeadline:(long long)a0 now:(long long)a1;

@end
