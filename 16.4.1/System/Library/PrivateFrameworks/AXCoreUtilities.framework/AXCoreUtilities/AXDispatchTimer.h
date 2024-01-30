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

- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)cancel;
- (void)dealloc;
- (void)_reallyCancel;
- (id)init;
- (id)description;
- (void)afterDelay:(double)a0 processBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithTargetSerialQueue:(id)a0;
- (void)_afterDelay:(double)a0 processBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;

@end
