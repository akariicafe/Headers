@class BPSSubscription;

@interface BPSSubscriptionStatus : NSObject

@property (nonatomic) long long state;
@property (retain, nonatomic) BPSSubscription *subscription;

- (void).cxx_destruct;
- (id)initWithState:(long long)a0 subscription:(id)a1;

@end
