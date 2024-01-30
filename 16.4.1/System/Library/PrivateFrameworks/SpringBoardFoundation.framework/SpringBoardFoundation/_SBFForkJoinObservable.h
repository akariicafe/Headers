@class NSArray, NSMutableArray;

@interface _SBFForkJoinObservable : SBFObservable {
    NSArray *_observables;
    NSMutableArray *_results;
    unsigned long long _uncompletedObservableCount;
}

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)_observableFinishedForObserver:(id)a0;
- (void)_setResult:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithWithObservables:(id)a0;

@end
