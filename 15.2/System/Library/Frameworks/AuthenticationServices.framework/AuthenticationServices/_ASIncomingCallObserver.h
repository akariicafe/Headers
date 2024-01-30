@class NSString, CXCallObserver;

@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate> {
    CXCallObserver *_callObserver;
    id /* block */ _incomingCallHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callObserverWithBlock:(id /* block */)a0;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (id)_initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
