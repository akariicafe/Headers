@class BKSProcessAssertion, NSObject;
@protocol OS_dispatch_queue;

@interface SBKProcessAssertion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _expirationBlock;
}

@property (readonly, nonatomic) unsigned long long identifier;
@property (retain, nonatomic) BKSProcessAssertion *bkProcessAssertion;
@property (retain, nonatomic) id expirationObserver;

- (id)description;
- (void)_expireBackgroundTask;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithExpirationBlock:(id /* block */)a0 debugDescription:(id)a1;
- (void)_onQueueSetBkProcessAssertion:(id)a0;

@end
