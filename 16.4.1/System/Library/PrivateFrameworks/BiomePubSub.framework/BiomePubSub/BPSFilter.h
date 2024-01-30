@class BPSPublisher;

@interface BPSFilter : BMBookmarkablePublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;
- (id)bookmarkableUpstreams;
- (id)init;
- (void).cxx_destruct;

@end
