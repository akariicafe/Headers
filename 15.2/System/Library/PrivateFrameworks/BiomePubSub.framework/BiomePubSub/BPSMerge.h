@protocol BPSPublisher;

@interface BPSMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1;
- (id)init;
- (void)subscribe:(id)a0;

@end
