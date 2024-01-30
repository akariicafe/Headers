@class NSString, BPSSubscriptionStatus;
@protocol BPSSubscriber, BPSSubscription;

@interface _BPSSubscribeOnInner : BPSSubscription <BPSSubscriber>

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) id<BPSSubscription> subscription;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)receiveInput:(id)a0;
- (void)requestDemand:(long long)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
