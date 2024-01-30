@class BPSPublisher;

@interface BMBookmarkWrapper : BPSPublisher

@property (readonly, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id initialState;

- (void)subscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (id)withBookmark:(id)a0;
- (id)initWithUpstream:(id)a0 initialState:(id)a1;

@end
