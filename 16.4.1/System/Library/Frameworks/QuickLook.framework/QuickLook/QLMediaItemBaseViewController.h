@class NSObject, AVAsset, NSString, AVPlayerLayer, NSError, UIView, AVPlayer;

@interface QLMediaItemBaseViewController : QLScrollableContentItemViewController <QLToolbarButtonAction> {
    NSObject *_playbackTimeObserver;
    BOOL _playing;
    BOOL _mediaWasPausedOnResignActive;
    id /* block */ _previewItemLoadingBlock;
    struct CGSize { double width; double height; } _imageSize;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) double mediaDuration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double remainingTime;
@property (retain, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) UIView *playerView;
@property (readonly, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) double currentPlaybackHeadPosition;
@property (readonly, nonatomic) long long playingStatus;
@property (readonly, nonatomic) BOOL playable;
@property (readonly, nonatomic) BOOL endOfMediaReached;
@property (readonly, nonatomic) BOOL visualTracksEnabled;
@property (readonly, nonatomic) double mediaVolume;
@property (readonly, nonatomic) AVAsset *mediaAsset;
@property (readonly, nonatomic) BOOL isFullScreen;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })imageSize;
- (BOOL)pause;
- (BOOL)togglePlayback;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)setMediaVolume:(double)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (void)hostApplicationDidBecomeActive;
- (void)previewIsAppearingWithProgress:(double)a0;
- (void)buttonPressedWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)hostApplicationDidEnterBackground:(id)a0;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (void)previewBecameFullScreen:(BOOL)a0 animated:(BOOL)a1;
- (void)previewDidAppear:(BOOL)a0;
- (void)previewDidDisappear:(BOOL)a0;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (id)toolbarButtonsForTraitCollection:(id)a0;
- (void)playerItemDidReachEnd:(id)a0;
- (BOOL)_assetIsDecodable:(id)a0;
- (void)_updateExternalPlayback;
- (void)_updatePlayingStatus;
- (void)didChangePlayingStatus;
- (void)didReachEndOfMedia;
- (void)observePlayingTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)resetToBeginning;
- (id)setupPlayerViewWithPlayer:(id)a0;
- (void)setupPlayerWithMediaAsset:(id)a0;
- (BOOL)shouldDisplayPlayButtonInNavigationBar;

@end
