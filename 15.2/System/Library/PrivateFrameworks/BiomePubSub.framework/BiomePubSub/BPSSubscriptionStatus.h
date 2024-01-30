@class BPSSubscription;

@interface BPSSubscriptionStatus : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) BPSSubscription *subscription;

+ (id)awaitingSubscription;
+ (id)terminal;
+ (id)subscribedWithSubscription:(id)a0;

- (void).cxx_destruct;
- (id)initWithState:(long long)a0 subscription:(id)a1;

@end
