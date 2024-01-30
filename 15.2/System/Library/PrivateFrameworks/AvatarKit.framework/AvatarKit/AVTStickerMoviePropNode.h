@class AVAssetReaderTrackOutput, AVPlayerItem, AVAsset, NSURL, AVAssetReader, AVPlayer;

@interface AVTStickerMoviePropNode : SCNNode {
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_assetReaderOutput;
    struct opaqueCMSampleBuffer { } *_currentSampleBuffer;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ loadCompletionHandler;
@property (nonatomic) BOOL isObservingPlayerItemStatus;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) AVAsset *movieAsset;
@property (nonatomic) BOOL applyToEmission;
@property (nonatomic) BOOL enableLoop;

- (id)clone;
- (void)setup;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)stickerGenerationWillBegin;
- (void)stickerGenerationDidEnd;
- (id)initWithMovieURL:(id)a0 geometry:(id)a1 applyToEmission:(BOOL)a2;
- (void)preparePlayerWithCompletionHandler:(id /* block */)a0;
- (struct opaqueCMSampleBuffer { } *)copySampleBufferAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)stopObservingPlayerItemStatusIfNeeded;
- (void)startObservingPlayerItemStatus;
- (void)itemDidFinishPlaying:(id)a0;

@end
