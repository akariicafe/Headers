@interface EFObservable : NSObject

+ (id)merge:(id)a0;
+ (id)concatenate:(id)a0;
+ (id)observableWithError:(id)a0;
+ (id)emptyObservable;
+ (id)observableWithBlock:(id /* block */)a0;
+ (id)observableOnDefaultNotificationCenterWithName:(id)a0 object:(id)a1;
+ (id)observableWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 scheduler:(id)a4;
+ (id)observableWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3 delay:(id /* block */)a4 scheduler:(id)a5;
+ (id)observableWithResult:(id)a0;
+ (id)neverObservable;
+ (id)observableWithFuture:(id)a0;
+ (id)observableWithResults:(id)a0 scheduler:(id)a1;
+ (id)combineLatest:(id)a0;
+ (id)observableWithResults:(id)a0;
+ (id)observableWithTimeInterval:(double)a0 scheduler:(id)a1;
+ (id)observableObserver;
+ (id)observableAfterDelay:(double)a0 interval:(double)a1 scheduler:(id)a2;
+ (id)observableOnNotificationCenter:(id)a0 name:(id)a1 object:(id)a2;
+ (id)observableAfterDelay:(double)a0 scheduler:(id)a1;
+ (id)observableOnNotifyTokenWithName:(id)a0;

- (id)first;
- (id)take:(unsigned long long)a0;
- (id)skip:(unsigned long long)a0;
- (id)map:(id /* block */)a0;
- (id)doOnError:(id /* block */)a0;
- (id)filter:(id /* block */)a0;
- (id)doOnCancel:(id /* block */)a0;
- (id)allObjects:(id *)a0;
- (id)replay:(unsigned long long)a0;
- (id)observeOn:(id)a0;
- (id)doOnTerminate:(id /* block */)a0;
- (id)startWith:(id)a0;
- (id)replay;
- (id)doOnCompletion:(id /* block */)a0;
- (id)doOnNext:(id /* block */)a0;
- (id)subscribeWithResultBlock:(id /* block */)a0;
- (id)sampleWithObservable:(id)a0;
- (id)startWith:(id)a0 scheduler:(id)a1;
- (id)delay:(double)a0 scheduler:(id)a1;
- (id)distinctUntilChanged;
- (id)doOnSubscribe:(id /* block */)a0;
- (id)publish;
- (id)subscribeOn:(id)a0;
- (id)debounceWithTimeInterval:(double)a0 scheduler:(id)a1;
- (id)debounceWithTimeInterval:(double)a0;
- (id)multicast:(id)a0;
- (id)sampleWithTimeInterval:(double)a0 scheduler:(id)a1;
- (id)sampleWithTimeInterval:(double)a0;

@end
