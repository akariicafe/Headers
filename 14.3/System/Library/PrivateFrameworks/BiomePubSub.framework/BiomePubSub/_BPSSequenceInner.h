@class NSArray, NSEnumerator;
@protocol BPSSubscriber;

@interface _BPSSequenceInner : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSArray *sequence;
@property (nonatomic) long long pendingDemand;
@property (nonatomic) BOOL recursion;
@property (retain, nonatomic) id next;
@property (retain, nonatomic) NSEnumerator *enumerator;

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 sequence:(id)a1;

@end
