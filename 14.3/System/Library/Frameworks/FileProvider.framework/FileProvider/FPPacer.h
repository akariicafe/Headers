@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPPacer : NSObject {
    double _lastFireTime;
    double _minFireInterval;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    _Atomic int _sourceSuspendCount;
}

@property (copy, nonatomic) id /* block */ eventBlock;

- (void)_fire;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 queue:(id)a1 minFireInterval:(double)a2;
- (void)dealloc;
- (void)_scheduleNextFire;
- (void)signal;
- (void)resume;
- (void)suspend;
- (double)_computeNextTime;

@end
