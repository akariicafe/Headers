@class VSSubscriptionRegistrationCenter;

@interface PSSSSubscriptionManagerInternal : NSObject

@property (retain, nonatomic) VSSubscriptionRegistrationCenter *registrationCenter;

- (void)getActiveSubscriptionServicesMatchingBundleIdentifiers:(id)a0 domainIdentifiers:(id)a1 maximumExpirationLimit:(double)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)removeWebSubscriptionServicesCreatedAfterDate:(id)a0;
- (void)removeSubscriptionServiceForURL:(id)a0;
- (void)registerSubscriptionServiceForURL:(id)a0 withSubscriptionInfo:(id)a1 expirationDate:(id)a2;

@end
