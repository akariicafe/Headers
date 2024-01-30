@class BPSSubscriberList, BPSCompletion, NSString, NSMutableArray;

@interface BPSPassThroughSubject : BPSPublisher <BPSSubject> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *upstreamSubscriptions;
@property (nonatomic) BOOL hasAnyDownstreamDemand;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) BPSCompletion *completion;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)acknowledgeDownstreamDemand;
- (void)disassociate:(long long)a0;
- (void)sendCompletion:(id)a0;
- (void)sendSubscription:(id)a0;
- (void)sendValue:(id)a0;

@end
