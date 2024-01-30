@class NSMutableArray;
@protocol BPSSubscriber;

@interface _BPSAbstractCombineLatest : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
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
- (void)receiveCompletion:(id)a0 atIndex:(unsigned long long)a1;
- (long long)receiveInput:(id)a0 atIndex:(unsigned long long)a1;
- (void)receiveSubscription:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithDownstream:(id)a0 upstreamCount:(unsigned long long)a1;
- (id)convertValues:(id)a0;

@end
