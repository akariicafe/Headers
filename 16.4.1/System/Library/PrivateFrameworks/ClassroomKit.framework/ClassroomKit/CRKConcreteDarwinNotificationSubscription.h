@interface CRKConcreteDarwinNotificationSubscription : NSObject <CRKCancelable>

@property (nonatomic) int notificationToken;

+ (id)subscriptionWithNotificationName:(id)a0 handler:(id /* block */)a1;

- (void)cancel;
- (void)dealloc;
- (id)initWithNotificationToken:(int)a0;

@end
