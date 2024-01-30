@class BPSPassThroughSubject;
@protocol BPSSubscriber;

@interface _BPSInnerConduit : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) BPSPassThroughSubject *parent;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) BOOL released;
@property (nonatomic) long long demand;
@property (nonatomic) long long identity;

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (void)finishWithCompletion:(id)a0;
- (id)initWithParent:(id)a0 downstream:(id)a1;
- (void)assignIdentity:(long long)a0;
- (void)offerInput:(id)a0;

@end
