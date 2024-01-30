@class NSString, BMStoreEnumerator;
@protocol BPSSubscriber;

@interface _BPSInnerBiomeSubscription : BPSSubscription {
    BMStoreEnumerator *_enumerator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BPSSubscriber> _downstream;
    long long _pendingDemand;
    BOOL _recursion;
    NSString *_streamId;
}

- (void)cancel;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (id)initWithStreamDatastoreReader:(id)a0 startTime:(double)a1 downstream:(id)a2 streamId:(id)a3;
- (id)initWithStreamDatastoreReader:(id)a0 bookmark:(id)a1 downstream:(id)a2 streamId:(id)a3;
- (id)initWithStreamEnumerator:(id)a0 downstream:(id)a1 streamId:(id)a2;
- (id)newBookmark;

@end
