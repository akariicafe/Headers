@class NAFuture;

@interface HMBFutureOperation : HMFOperation

@property (readonly, copy) id /* block */ block;
@property (readonly) NAFuture *future;

+ (id)logCategory;

- (void)main;
- (void)cancelWithError:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
