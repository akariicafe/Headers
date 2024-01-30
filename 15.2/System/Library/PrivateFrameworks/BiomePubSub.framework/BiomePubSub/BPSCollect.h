@protocol BPSPublisher;

@interface BPSCollect : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithUpstream:(id)a0;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (void)subscribe:(id)a0;

@end
