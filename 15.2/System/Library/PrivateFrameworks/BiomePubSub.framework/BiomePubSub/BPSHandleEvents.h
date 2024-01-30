@protocol BPSPublisher;

@interface BPSHandleEvents : BMBookmarkablePublisher {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id /* block */ receiveSubscription;
@property (readonly, nonatomic) id /* block */ receiveOutput;
@property (readonly, nonatomic) id /* block */ receiveCompletion;
@property (readonly, nonatomic) id /* block */ receiveCancel;
@property (readonly, nonatomic) id /* block */ receiveRequest;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)connect;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 receiveSubscription:(id /* block */)a1 receiveOutput:(id /* block */)a2 receiveCompletion:(id /* block */)a3 receiveCancel:(id /* block */)a4 receiveRequest:(id /* block */)a5;

@end
