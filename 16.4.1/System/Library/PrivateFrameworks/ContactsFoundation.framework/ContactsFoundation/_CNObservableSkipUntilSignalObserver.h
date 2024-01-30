@class NSString;
@protocol _CNObservableSkipUntilSignalObserverDelegate;

@interface _CNObservableSkipUntilSignalObserver : NSObject <CNObserver>

@property (readonly, weak) id<_CNObservableSkipUntilSignalObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)a0;
- (void)observerDidFailWithError:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
