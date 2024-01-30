@protocol PXAudioAssetFetchResult;

@interface PXFlexMusicCuration : NSObject

@property (readonly, nonatomic) id<PXAudioAssetFetchResult> bestSongSuggestions;
@property (readonly, nonatomic) id<PXAudioAssetFetchResult> secondarySongSuggestions;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBestSongSuggestions:(id)a0 secondarySongSuggestions:(id)a1;

@end
