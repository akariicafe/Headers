@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManager : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterAllSubscriptions;
- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;
- (void)unregisterSubscriptionWithInfo:(id)a0;

@end
