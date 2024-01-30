@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (void)subscribe:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (id)initWithPublishers:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
