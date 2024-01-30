@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManager : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter;

- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterAllSubscriptions;
- (void)unregisterSubscriptionWithInfo:(id)a0;

@end
