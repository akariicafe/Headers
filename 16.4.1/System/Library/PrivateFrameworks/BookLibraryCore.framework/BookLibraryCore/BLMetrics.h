@class BLServiceProxy;

@interface BLMetrics : NSObject

@property (retain, nonatomic) BLServiceProxy *serviceProxy;

+ (id)metrics;
+ (void)flushInProcessWithCompletion:(id /* block */)a0;

- (void)enqueueEvents:(id)a0;
- (void)flush;
- (id)init;
- (void).cxx_destruct;
- (void)setAutoFlushEnabled:(BOOL)a0;

@end
