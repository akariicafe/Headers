@interface CRKConcreteDarwinNotificationSubscription : NSObject <CRKCancelable>

@property (nonatomic) int notificationToken;

+ (id)subscriptionWithNotificationName:(id)a0 handler:(id /* block */)a1;

- (void)dealloc;
- (void)cancel;
- (id)initWithNotificationToken:(int)a0;

@end
