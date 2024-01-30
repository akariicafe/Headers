@class BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface SBKProcessAssertion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _expirationBlock;
}

@property (readonly) unsigned long long identifier;
@property (retain) BKSProcessAssertion *bkProcessAssertion;
@property (retain) id expirationObserver;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)_expireBackgroundTask;
- (void)invalidate;
- (void)_onQueueSetBkProcessAssertion:(id)a0;
- (id)initWithExpirationBlock:(id /* block */)a0 debugDescription:(id)a1;

@end
