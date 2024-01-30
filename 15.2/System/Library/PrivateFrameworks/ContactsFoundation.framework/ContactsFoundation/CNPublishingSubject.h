@class CNObservableContractEnforcement, NSString, NSMutableArray, CNObservable;
@protocol CNCancelable;

@interface CNPublishingSubject : CNObservable <CNObserver>

@property (readonly, nonatomic) CNObservable *observable;
@property (retain, nonatomic) id<CNCancelable> upstreamToken;
@property (readonly, nonatomic) NSMutableArray *observers;
@property (readonly, nonatomic) CNObservableContractEnforcement *enforcement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObservable:(id)a0;
- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (void)_addObserver:(id)a0;
- (void)_removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)subscribe:(id)a0;
- (id)_allObservers;
- (void)observerDidFailWithError:(id)a0;
- (void)_subscribeToObservableIfNecessary;

@end
