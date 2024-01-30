@protocol PXStorySongResource;

@interface PXStoryPassthroughSongResourceProducer : NSObject <PXStorySongResourceProducer>

@property (readonly, nonatomic) id<PXStorySongResource> songResource;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSongResource:(id)a0;
- (id)requestSongResourceWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
