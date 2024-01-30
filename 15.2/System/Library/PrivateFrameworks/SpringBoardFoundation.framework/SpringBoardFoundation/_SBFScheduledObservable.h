@protocol SBFScheduler, SBFObservable;

@interface _SBFScheduledObservable : SBFObservable {
    id<SBFObservable> _observable;
    id<SBFScheduler> _scheduler;
}

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 scheduler:(id)a1;

@end
