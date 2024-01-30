@class NSString, BPSSubscriptionStatus;
@protocol BPSSubscriber;

@interface _BPSMulticastInner : BMBookmarkableSubscription <BPSSubscriber, BPSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BPSSubscriptionStatus *_status;
}

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
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;

@end
