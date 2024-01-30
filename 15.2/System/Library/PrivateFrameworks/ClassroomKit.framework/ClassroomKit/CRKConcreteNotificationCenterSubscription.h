@class NSNotificationCenter;

@interface CRKConcreteNotificationCenterSubscription : NSObject <CRKCancelable>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (copy) id /* block */ notificationHandler;

+ (id)subscriptionWithNotificationCenter:(id)a0 notificationName:(id)a1 notificationHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)notificationDidFire:(id)a0;
- (id)initWithNotificationCenter:(id)a0 notificationHandler:(id /* block */)a1;

@end
