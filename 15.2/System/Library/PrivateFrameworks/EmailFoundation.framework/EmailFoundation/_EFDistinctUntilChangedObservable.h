@class NSLock;
@protocol EFObservable;

@interface _EFDistinctUntilChangedObservable : EFObservable {
    id<EFObservable> _observable;
    id _lastObservedResult;
    NSLock *_lock;
}

- (id)initWithObservable:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isLastResultDistinctFromResult:(id)a0;
- (id)subscribe:(id)a0;

@end
