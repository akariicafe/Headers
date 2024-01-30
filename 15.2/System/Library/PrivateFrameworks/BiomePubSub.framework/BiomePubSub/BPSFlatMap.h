@protocol BPSPublisher;

@interface BPSFlatMap : BMBookmarkablePublisher

@property (readonly, nonatomic) long long maxPublishers;
@property (readonly, nonatomic) id /* block */ transform;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (id)initWithUpstream:(id)a0 maxPublishers:(long long)a1 transform:(id /* block */)a2;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;

@end
