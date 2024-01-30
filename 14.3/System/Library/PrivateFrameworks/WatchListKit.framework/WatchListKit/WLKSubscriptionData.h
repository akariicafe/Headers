@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {
    NSDictionary *_backingDictionary;
    NSArray *_subscriptionArray;
    NSDictionary *_account;
    NSDictionary *_family;
    NSDictionary *_subscriptionsByAdamID;
    long long _activeSubscriptionsCount;
    NSDictionary *_activeTVPlusSubscription;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)subscriptions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)currentFamily;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isTVPlusSubscriber;
- (unsigned long long)activeSubscriptionsCount;
- (id)subscriptionByAdamID:(id)a0;
- (id)currentAccount;
- (id)activeTVPlusSubscription;
- (BOOL)isEqualToSubscriptionData:(id)a0;

@end
