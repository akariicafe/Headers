@interface FCKeyValueStoreSavePolicy : NSObject

+ (id)appBackgroundPolicyWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
+ (id)defaultPolicy;
+ (id)throttlePolicyWithDelay:(double)a0;

- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
