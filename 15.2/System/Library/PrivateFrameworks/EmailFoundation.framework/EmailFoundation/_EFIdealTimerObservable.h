@protocol EFObservable, EFScheduler;

@interface _EFIdealTimerObservable : EFObservable {
    id<EFObservable> _input;
    id<EFScheduler> _scheduler;
    double _interval;
}

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 timeInterval:(double)a1 scheduler:(id)a2;

@end
