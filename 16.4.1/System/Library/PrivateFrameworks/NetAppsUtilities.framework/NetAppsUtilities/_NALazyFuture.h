@class NSObject;
@protocol OS_dispatch_queue, NAScheduler;

@interface _NALazyFuture : NAFuture

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) id<NAScheduler> scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) BOOL started;

- (id)initWithBlock:(id /* block */)a0 scheduler:(id)a1;
- (void)willAddCompletionBlock;
- (void).cxx_destruct;

@end
