@protocol PXAudioAssetFetchResult;

@interface PXStoryPassthroughSongsProducer : NSObject <PXStorySongsProducer>

@property (readonly, nonatomic) id<PXAudioAssetFetchResult> songs;
@property (nonatomic) unsigned long long logContext;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSongs:(id)a0;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
