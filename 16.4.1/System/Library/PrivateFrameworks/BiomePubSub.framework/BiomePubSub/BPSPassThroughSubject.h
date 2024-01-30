@class BPSSubscriberList, BPSCompletion, BPSSubscription, NSString, NSMutableArray;

@interface BPSPassThroughSubject : BMBookmarkablePublisher <BPSSubject, BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *upstreamSubscriptions;
@property (nonatomic) BOOL hasAnyDownstreamDemand;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) BPSCompletion *completion;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSSubscription *sub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (long long)receiveInput:(id)a0;
- (id)subscription;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (void)sendSubscription:(id)a0;
- (void)disassociate:(long long)a0;
- (void)cancel;
- (void)sendValue:(id)a0;
- (void)sendCompletion:(id)a0;
- (void)dealloc;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)init;
- (void)acknowledgeDownstreamDemand;
- (void).cxx_destruct;

@end
