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
- (void)encodeWithCoder:(id)a0;
- (id)currentAccount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)currentFamily;
- (unsigned long long)activeSubscriptionsCount;
- (BOOL)isTVPlusSubscriber;
- (id)subscriptionByAdamID:(id)a0;
- (id)activeTVPlusSubscription;
- (BOOL)isEqualToSubscriptionData:(id)a0;

@end
