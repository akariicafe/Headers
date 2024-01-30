@class BPSSubscription;

@interface BPSSubscriptionStatus : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) BPSSubscription *subscription;

+ (id)awaitingSubscription;
+ (id)subscribedWithSubscription:(id)a0;
+ (id)terminal;

- (id)initWithState:(long long)a0 subscription:(id)a1;
- (void).cxx_destruct;

@end
