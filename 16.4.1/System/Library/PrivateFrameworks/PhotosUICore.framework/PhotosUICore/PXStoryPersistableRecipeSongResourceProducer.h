@class PXStoryConfiguration;
@protocol PFStoryRecipe;

@interface PXStoryPersistableRecipeSongResourceProducer : NSObject <PXStorySongResourceProducer> {
    id<PFStoryRecipe> _persistableRecipe;
    PXStoryConfiguration *_configuration;
}

@property (nonatomic) unsigned long long logContext;

- (id)init;
- (void).cxx_destruct;
- (void)_handlePersistedAudioAsset:(id)a0 isFinal:(BOOL)a1 error:(id)a2 options:(unsigned long long)a3 resultHandler:(id /* block */)a4;
- (void)_handleAppleMusicPlaybackStatus:(long long)a0 error:(id)a1 parentProgress:(id)a2 options:(unsigned long long)a3 resultHandler:(id /* block */)a4;
- (id)initWithPersistableRecipe:(id)a0 configuration:(id)a1;
- (id)requestSongResourceWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
