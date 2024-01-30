@class PSSSSubscriptionManager;

@interface CSSubscriptionManager : NSObject {
    PSSSSubscriptionManager *_internal;
}

+ (id)sharedManager;

- (void)registerSubscriptionWithInfo:(id)a0 expirationDate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterSubscriptionWithInfo:(id)a0;
- (void)unregisterAllSubscriptions;

@end
