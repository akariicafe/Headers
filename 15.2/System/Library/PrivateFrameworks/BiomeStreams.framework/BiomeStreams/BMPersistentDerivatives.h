@class NSURL, NSString, BPSPublisher;

@interface BMPersistentDerivatives : BMBookmarkablePublisher

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) BPSPublisher *upstream;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;
- (void).cxx_destruct;
- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithUpstream:(id)a0 derivativeDatabaseURL:(id)a1 derivedTableName:(id)a2;

@end
