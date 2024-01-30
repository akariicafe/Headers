@class NSMutableArray;
@protocol BPSSubscriber;

@interface _BPSMerged : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _downstreamLock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) long long count;
@property (nonatomic) long long demand;
@property (nonatomic) BOOL terminated;
@property (nonatomic) long long upstreamFinished;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *activeSubscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (nonatomic) BOOL recursive;
@property (nonatomic) long long pending;

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (id)applyDownstreamWhileLocked:(BOOL)a0 apply:(id /* block */)a1;
- (id)initWithDownstream:(id)a0 count:(long long)a1;
- (void)receiveCompletion:(id)a0 atIndex:(long long)a1;
- (long long)receiveInput:(id)a0 atIndex:(long long)a1;
- (void)receiveSubscription:(id)a0 atIndex:(long long)a1;

@end
