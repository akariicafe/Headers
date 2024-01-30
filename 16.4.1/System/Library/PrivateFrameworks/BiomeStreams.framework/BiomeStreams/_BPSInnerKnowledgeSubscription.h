@class _DKEventQuery;
@protocol BPSSubscriber, _DKKnowledgeQuerying;

@interface _BPSInnerKnowledgeSubscription : BPSSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) _DKEventQuery *query;
@property (nonatomic) long long pendingDemand;
@property (nonatomic) BOOL recursion;
@property (retain, nonatomic) id next;
@property (nonatomic) long long offset;
@property (nonatomic) long long remaining;

- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 downstream:(id)a1 store:(id)a2;

@end
