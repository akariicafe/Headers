@class NSString;
@protocol _CNObservableSkipUntilInputObserverDelegate, CNObserver;

@interface _CNObservableSkipUntilInputObserver : NSObject <CNObserver>

@property (readonly) id<CNObserver> observer;
@property (readonly, weak) id<_CNObservableSkipUntilInputObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidComplete;
- (id)initWithObserver:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)observerDidFailWithError:(id)a0;

@end
