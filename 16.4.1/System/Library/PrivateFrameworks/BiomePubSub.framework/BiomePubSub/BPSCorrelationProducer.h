@class NSString, BPSSubscription;
@protocol BPSSubscriber;

@interface BPSCorrelationProducer : BMBookmarkableSubscription <BPSSubscriber, BPSCorrelateProducer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) BPSSubscription *subscription;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)receiveInput:(id)a0;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0;
- (id)receiveNewValue:(id)a0 source:(long long)a1;
- (void)cancel;
- (void).cxx_destruct;
- (long long)receiveInput:(id)a0 source:(long long)a1;

@end
