@class NSMutableArray, NSMutableSet;
@protocol BPSSubscriber;

@interface _BPSAbstractOrderedMerge : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *activeSubscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSMutableArray *requestsPerSubscription;
@property (retain, nonatomic) NSMutableSet *completedUpstreamIndexes;
@property (nonatomic) BOOL recursion;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL errored;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) long long demand;
@property (nonatomic) unsigned long long finishCount;

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (long long)compareFirst:(id)a0 withSecond:(id)a1;
- (void)receiveCompletion:(id)a0 atIndex:(unsigned long long)a1;
- (long long)receiveInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)receiveSubscription:(id)a0 atIndex:(unsigned long long)a1;
- (void)flushBufferAndRequestMoreWhileLocked;
- (BOOL)isWaitingForMoreValues;
- (id)nextValueIndex:(id *)a0;
- (id)initWithDownstream:(id)a0 upstreamCount:(unsigned long long)a1;

@end
