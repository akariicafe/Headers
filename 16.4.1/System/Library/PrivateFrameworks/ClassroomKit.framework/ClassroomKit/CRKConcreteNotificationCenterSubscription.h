@class NSNotificationCenter;

@interface CRKConcreteNotificationCenterSubscription : NSObject <CRKCancelable>

@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) id object;
@property (copy) id /* block */ notificationHandler;

+ (id)subscriptionWithNotificationCenter:(id)a0 notificationName:(id)a1 object:(id)a2 notificationHandler:(id /* block */)a3;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0 object:(id)a1 notificationHandler:(id /* block */)a2;
- (void)notificationDidFire:(id)a0;

@end
