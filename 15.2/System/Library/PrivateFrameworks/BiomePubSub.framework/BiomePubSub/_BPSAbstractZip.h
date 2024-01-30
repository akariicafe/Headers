@class NSMutableArray;
@protocol BPSSubscriber;

@interface _BPSAbstractZip : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL errored;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableArray *upstreamFinished;
@property (nonatomic) long long upstreamCount;
@property (nonatomic) BOOL recursive;
@property (nonatomic) long long pendingDemand;

- (id)upstreamSubscriptions;
- (id)convertValues:(id)a0;
- (id)initWithDownstream:(id)a0 upstreamCount:(long long)a1;
- (void).cxx_destruct;
- (void)requestDemand:(long long)a0;
- (void)cancel;
- (void)resolvePendingDemandAndUnlock;
- (void)lockSendCompletion:(id)a0 index:(long long)a1;
- (void)receiveSubscription:(id)a0 index:(long long)a1;
- (long long)receiveInput:(id)a0 index:(long long)a1;
- (void)receiveCompletion:(id)a0 index:(long long)a1;

@end
