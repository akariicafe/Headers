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

- (void)encodeWithCoder:(id)a0;
- (id)subscriptions;
- (id)activeTVPlusSubscription;
- (id)initWithCoder:(id)a0;
- (id)subscriptionByAdamID:(id)a0;
- (id)currentAccount;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isTVPlusSubscriber;
- (BOOL)isEqualToSubscriptionData:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)activeSubscriptionsCount;
- (id)currentFamily;
- (void).cxx_destruct;

@end
