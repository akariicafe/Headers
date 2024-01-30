@class BPSFutureResult, BPSSubscriberList;

@interface BPSFuture : BPSPublisher {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSFutureResult *result;

- (void)subscribe:(id)a0;
- (void)disassociate:(long long)a0;
- (void).cxx_destruct;
- (id)initWithAttemptToFulfill:(id /* block */)a0;

@end
