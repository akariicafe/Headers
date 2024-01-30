@class BLServiceProxy;

@interface BLMetrics : NSObject

@property (retain, nonatomic) BLServiceProxy *serviceProxy;

+ (id)metrics;
+ (void)flushInProcessWithCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)enqueueEvents:(id)a0;
- (void)flush;

@end
