@class NSString, BPSSubscriptionStatus;
@protocol BPSSubscriber;

@interface BPSReduceProducer : BMBookmarkableSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) id /* block */ reduce;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) BOOL downstreamRequested;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL upstreamCompleted;
@property (nonatomic) BOOL empty;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) id initial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)safeMutableCopy:(id)a0;

- (id)newBookmark;
- (long long)receiveInput:(id)a0;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (id)receiveNewValue:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)initWithDownstream:(id)a0 initial:(id)a1 reduce:(id /* block */)a2;
- (void)cancel;
- (void).cxx_destruct;

@end
