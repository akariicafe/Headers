@interface CRKEmptySubscription : NSObject <CRKCancelable>

+ (id)errorSubscriptionWithReason:(id)a0;

- (void)cancel;

@end
