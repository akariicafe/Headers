@class NSArray;

@interface BPSOrderedMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;

@end
