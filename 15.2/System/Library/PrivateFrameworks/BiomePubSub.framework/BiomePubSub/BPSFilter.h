@class BPSPublisher;

@interface BPSFilter : BMBookmarkablePublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;

@end
