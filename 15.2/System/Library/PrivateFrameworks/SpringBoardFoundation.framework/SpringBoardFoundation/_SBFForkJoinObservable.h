@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable {
    NSArray *_observables;
    NSMutableArray *_results;
    unsigned long long _uncompletedObservableCount;
}

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (void)_setResult:(id)a0 atIndex:(unsigned long long)a1;
- (void)_observableFinishedForObserver:(id)a0;
- (id)initWithWithObservables:(id)a0;

@end
