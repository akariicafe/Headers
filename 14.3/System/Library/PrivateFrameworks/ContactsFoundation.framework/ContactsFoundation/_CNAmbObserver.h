@class NSString;
@protocol _CNAmbObserverDelegate, CNObserver;

@interface _CNAmbObserver : NSObject <CNObserver> {
    id<CNObserver> _observer;
    id<_CNAmbObserverDelegate> _delegate;
    BOOL _isWinner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserver:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)declareWinner;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;

@end
