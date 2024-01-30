@class NSString;
@protocol _CNObservableSkipUntilSignalObserverDelegate;

@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver>

@property (readonly, weak) id<_CNObservableSkipUntilSignalObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
