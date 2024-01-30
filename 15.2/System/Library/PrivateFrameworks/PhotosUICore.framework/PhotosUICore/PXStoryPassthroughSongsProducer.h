@protocol PXAudioAssetFetchResult;

@interface PXStoryPassthroughSongsProducer : NSObject <PXStorySongsProducer>

@property (readonly, nonatomic) id<PXAudioAssetFetchResult> songs;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (id)init;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;
- (id)initWithSongs:(id)a0;

@end
