@class BPSPassThroughSubject;
@protocol BPSSubscriber;

@interface _BPSInnerConduit : BMBookmarkableSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (retain, nonatomic) BPSPassThroughSubject *parent;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) BOOL released;
@property (nonatomic) long long demand;
@property (nonatomic) long long identity;

- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (id)initWithParent:(id)a0 downstream:(id)a1;
- (void)finishWithCompletion:(id)a0;
- (void)cancel;
- (void)assignIdentity:(long long)a0;
- (void)offerInput:(id)a0;
- (void).cxx_destruct;

@end
