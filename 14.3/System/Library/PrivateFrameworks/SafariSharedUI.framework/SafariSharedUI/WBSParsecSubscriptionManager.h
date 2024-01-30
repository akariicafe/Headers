@class NSArray, PSSSSubscriptionManagerInternal, NSMutableDictionary;

@interface WBSParsecSubscriptionManager : NSObject {
    PSSSSubscriptionManagerInternal *_thirdPartySubscriptionManager;
    NSMutableDictionary *_subscriptionsByProvider;
}

@property (readonly, nonatomic) NSArray *subscriptionDictionaries;
@property (readonly, nonatomic) BOOL needsUpdate;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_updateThirdPartySubscriptionsWithBundleIdentifierWhitelist:(id)a0 domainWhitelist:(id)a1 maximumExpirationLimit:(double)a2;
- (void)updateSubscriptionsWithBundleIdentifierWhitelist:(id)a0 domainWhitelist:(id)a1 maximumExpirationLimit:(double)a2;
- (void)registerSubscriptionServiceForURL:(id)a0 withSubscriptionInfo:(id)a1;
- (void)removeSubscriptionsAddedAfterDate:(id)a0;

@end
