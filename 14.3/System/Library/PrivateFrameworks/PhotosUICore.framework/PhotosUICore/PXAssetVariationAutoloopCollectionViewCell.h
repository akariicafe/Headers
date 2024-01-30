@class NSString, ISWrappedAVPlayer, ISWrappedAVAudioSession, PXVideoPlayerView, AVAsset;

@interface PXAssetVariationAutoloopCollectionViewCell : PXAssetVariationCollectionViewCell <ISChangeObserver> {
    ISWrappedAVPlayer *_videoPlayer;
    PXVideoPlayerView *_videoView;
    AVAsset *_displayedAsset;
}

@property (retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateError;
- (id)loadVariationView;
- (void)updateVariationView;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateVideoPlayerRateWithItem:(id)a0;
- (void)_videoStatusDidChange;
- (void)prepareForReuse;

@end
