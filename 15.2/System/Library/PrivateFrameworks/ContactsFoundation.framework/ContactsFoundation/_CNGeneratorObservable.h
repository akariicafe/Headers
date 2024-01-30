@class CNCancelationToken;
@protocol CNScheduler;

@interface _CNGeneratorObservable : CNObservable {
    id _state;
    id /* block */ _condition;
    id /* block */ _nextState;
    id /* block */ _resultSelector;
    id /* block */ _delay;
    id<CNScheduler> _scheduler;
    CNCancelationToken *_cancelable;
}

- (BOOL)isFinished;
- (BOOL)isCanceled;
- (void)updateState;
- (void)sendResultsToObserver:(id)a0;
- (void)scheduleNextResultForObserver:(id)a0;
- (void)sendCurrentStateToObserver:(id)a0;
- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 delay:(id /* block */)a4 scheduler:(id)a5;

@end
