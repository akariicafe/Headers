@class NSString;
@protocol _CNObservableTakeUntilSignalObserverDelegate, CNObserver;

@interface _CNObservableTakeUntilSignalObserver : NSObject <CNObserver>

@property (readonly) id<CNObserver> observer;
@property (readonly, weak) id<_CNObservableTakeUntilSignalObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithObserver:(id)a0 delegate:(id)a1;

@end
