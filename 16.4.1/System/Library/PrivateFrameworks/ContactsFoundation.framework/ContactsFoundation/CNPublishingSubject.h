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

- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (void)_addObserver:(id)a0;
- (void)_removeObserver:(id)a0;
- (id)subscribe:(id)a0;
- (void)_subscribeToObservableIfNecessary;
- (id)initWithObservable:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (id)init;
- (id)_allObservers;
- (void).cxx_destruct;

@end
