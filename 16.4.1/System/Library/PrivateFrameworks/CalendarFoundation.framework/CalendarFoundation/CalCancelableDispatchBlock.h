@class NSObject;
@protocol OS_dispatch_queue;

@interface CalCancelableDispatchBlock : NSObject <CalCancelable>

@property (copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)cancel;
- (void).cxx_destruct;
- (void)performAfterDelay:(double)a0;
- (id)initWithBlock:(id /* block */)a0 inQueue:(id)a1;
- (void)performAsync;

@end
