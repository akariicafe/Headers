@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface IMDistributingProxy : NSProxy

@property (readonly, copy, nonatomic) NSArray *targets;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic, getter=isAsynchronous) BOOL asynchronous;
@property (readonly, copy, nonatomic) id /* block */ filterBlock;

- (id)initWithTargets:(id)a0;
- (id)initWithTargets:(id)a0 targetQueue:(id)a1 asynchronous:(BOOL)a2 filterBlock:(id /* block */)a3;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
