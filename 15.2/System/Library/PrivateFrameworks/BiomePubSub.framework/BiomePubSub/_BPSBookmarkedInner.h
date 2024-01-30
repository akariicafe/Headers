@class NSString, BPSSubscription;
@protocol BPSSubscriber, BMBookmark;

@interface _BPSBookmarkedInner : BMBookmarkableSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (copy, nonatomic) NSString *upstreamClassName;
@property (retain, nonatomic) BPSSubscription *subscription;
@property (retain, nonatomic) id<BMBookmark> upstreamBookmark;
@property (retain, nonatomic) id state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newBookmark;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;
- (void)_updateBookmarkWhenLocked;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (id)initWithUpstream:(id)a0 downstream:(id)a1 state:(id)a2;
- (void)cancel;
- (long long)receiveInput:(id)a0;

@end
