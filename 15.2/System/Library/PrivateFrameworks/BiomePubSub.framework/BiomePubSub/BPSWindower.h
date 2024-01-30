@class NSArray, NSString;
@protocol BPSPublisher, BPSWindowAssigner;

@interface BPSWindower : BMBookmarkablePublisher <BMBookmarkablePublisher>

@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (copy, nonatomic) id /* block */ key;
@property (readonly, nonatomic) id<BPSWindowAssigner> assigner;
@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 key:(id /* block */)a1 assigner:(id)a2;

@end
