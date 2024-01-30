@class NSObject;
@protocol OS_dispatch_queue;

@interface OperatorTask : NSObject

@property (retain) NSObject<OS_dispatch_queue> *operatorQueue;
@property (copy) id /* block */ operatorBlock;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 withBlock:(id /* block */)a1;

@end
