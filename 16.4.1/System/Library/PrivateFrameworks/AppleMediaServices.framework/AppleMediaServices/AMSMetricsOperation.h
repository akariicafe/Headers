@interface AMSMetricsOperation : NSObject

+ (id)dropEventsOperation;
+ (id)flushOperationWithStrategy:(id)a0 promise:(id)a1;

- (id)_init;

@end
