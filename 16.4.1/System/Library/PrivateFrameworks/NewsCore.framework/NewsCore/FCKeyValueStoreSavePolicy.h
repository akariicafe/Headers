@interface FCKeyValueStoreSavePolicy : NSObject

+ (id)appBackgroundPolicyWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
+ (id)unthrottledPolicy;
+ (id)throttlePolicyWithDelay:(double)a0;
+ (id)defaultPolicy;

- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
