@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AXDispatchTimer : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isPending) BOOL pending;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer;
@property (copy) id /* block */ processBlock;
@property (copy) id /* block */ cancelBlock;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (nonatomic) BOOL useWallTime;

- (void)_afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_reallyCancel;
- (void)dealloc;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (void)cancel;
- (id)initWithTargetSerialQueue:(id)a0;

@end
