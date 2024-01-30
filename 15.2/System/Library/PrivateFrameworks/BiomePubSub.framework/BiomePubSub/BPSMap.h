@protocol BPSPublisher;

@interface BPSMap : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (copy, nonatomic) id /* block */ transform;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 transform:(id /* block */)a1;

@end
