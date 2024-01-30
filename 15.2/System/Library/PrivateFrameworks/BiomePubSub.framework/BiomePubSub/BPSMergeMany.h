@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithPublishers:(id)a0;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;

@end
