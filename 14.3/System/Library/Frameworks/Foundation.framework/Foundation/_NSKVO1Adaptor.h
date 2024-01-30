@class NSObservableKeyPath;

@interface _NSKVO1Adaptor : _NSConcreteObservation {
    NSObservableKeyPath *kp;
    BOOL emitsChanges;
}

- (void)remove;
- (void)_setEmitsChanges:(BOOL)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 changeKind:(unsigned long long)a2 oldValue:(id)a3 newValue:(id)a4 indexes:(id)a5 context:(void *)a6;
- (id)initWithObservable:(id)a0 observer:(id)a1 keyPath:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)finishObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
