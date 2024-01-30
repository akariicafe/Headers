@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface TSUDelayTimer : NSObject {
    _Atomic BOOL _cancelled;
}

@property (retain, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue;
@property (retain, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;

- (void)cancel;
- (void)dealloc;
- (void)_reallyCancel;
- (id)init;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (id)initWithTargetSerialQueue:(id)a0;

@end
