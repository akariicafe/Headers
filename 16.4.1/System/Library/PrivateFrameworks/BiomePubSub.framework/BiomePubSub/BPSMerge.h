@protocol BPSPublisher;

@interface BPSMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (id)init;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1;

@end
