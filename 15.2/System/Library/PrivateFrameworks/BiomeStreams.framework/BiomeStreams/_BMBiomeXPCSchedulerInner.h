@class BMComputeXPCPublisherClient, NSString, BMDSL, BMStreamsAccessClient, BMComputeXPCSubscriptionBookmarkStorage, BMBookmarkablePublisher, BPSSubscriptionStatus, NSObject, BMComputeXPCSubscription;
@protocol BPSSubscriber, OS_dispatch_queue;

@interface _BMBiomeXPCSchedulerInner : BPSSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BMBookmarkablePublisher *_bpsPublisher;
    double _latestEventTime;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) long long demand;
@property (retain, nonatomic) BMComputeXPCPublisherClient *client;
@property (retain, nonatomic) BMDSL *graph;
@property (retain, nonatomic) BMComputeXPCSubscription *xpcSubscription;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL waking;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (retain, nonatomic) BMStreamsAccessClient *accessClient;
@property (retain, nonatomic) BMComputeXPCSubscriptionBookmarkStorage *bookmarkStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)streamIdentifierFromGraph:(id)a0;

- (id)initWithDownstream:(id)a0 identifier:(id)a1 graph:(id)a2 client:(id)a3 targetQueue:(id)a4 waking:(BOOL)a5;
- (void)receiveCompletion:(id)a0;
- (void)switchToUpdatedPublisherWithBookmark:(id)a0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (void)switchToPublisherWithStreamIdentifier:(id)a0 storeEvent:(id)a1;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
