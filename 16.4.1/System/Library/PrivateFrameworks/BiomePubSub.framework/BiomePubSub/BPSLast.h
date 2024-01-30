@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)subscribe:(id)a0;
- (id)bookmarkableUpstreams;
- (id)initWithUpstream:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
