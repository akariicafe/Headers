@class BPSFuture;
@protocol BPSSubscriber;

@interface _BPSInnerFutureConduit : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (retain, nonatomic) BPSFuture *parent;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) BOOL hasAnyDemand;
@property (nonatomic) long long identifity;
@property (nonatomic) BOOL released;

- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (id)initWithParent:(id)a0 downstream:(id)a1;
- (void)cancel;
- (void)assignIdentity:(long long)a0;
- (void).cxx_destruct;
- (void)fulfill:(id)a0;

@end
