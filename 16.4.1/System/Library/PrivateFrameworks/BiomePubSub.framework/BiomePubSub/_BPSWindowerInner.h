@class NSString, NSMutableDictionary, BPSSubscriptionStatus, NSMutableArray;
@protocol BPSSubscriber, BPSWindowAssigner;

@interface _BPSWindowerInner : BMBookmarkableSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BPSSubscriptionStatus *_status;
    long long _demand;
    NSMutableDictionary *_windows;
    NSMutableDictionary *_windowsDemand;
    NSMutableDictionary *_windowsBuffer;
    NSMutableDictionary *_windowsStatus;
    NSMutableArray *_buffer;
    BOOL _recursion;
    BOOL _sideRecursion;
}

@property (readonly, nonatomic) id<BPSSubscriber> downstream;
@property (readonly, nonatomic) id /* block */ key;
@property (readonly, nonatomic) id<BPSWindowAssigner> assigner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (long long)receiveInput:(id)a0;
- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)cancelWithKey:(id)a0 identifier:(id)a1;
- (id)initWithDownstream:(id)a0 key:(id /* block */)a1 assigner:(id)a2;
- (void)receiveCompletion:(id)a0 key:(id)a1 identifier:(id)a2;
- (long long)receiveInput:(id)a0 key:(id)a1 identifier:(id)a2;
- (void)receiveSubscription:(id)a0 key:(id)a1 identifier:(id)a2;
- (void)requestDemand:(long long)a0 key:(id)a1 identifier:(id)a2;

@end
