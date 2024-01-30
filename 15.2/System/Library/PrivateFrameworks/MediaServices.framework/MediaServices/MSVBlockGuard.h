@class MSVTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
}

- (BOOL)disarm;
- (id)initWithDeallocHandler:(id /* block */)a0;
- (id)initWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTimeout:(double)a0 interruptionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)_interruptWithReason:(long long)a0;

@end
