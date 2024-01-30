@class CKMovieMediaObject, NSString, ISWrappedAVPlayer, ISVideoPlayerUIView, ISWrappedAVAudioSession, UIImageView, UIView;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView <ISWrappedAVPlayerDelegate, ISChangeObserver>

@property (retain, nonatomic) ISVideoPlayerUIView *videoPlayer;
@property (retain, nonatomic) ISWrappedAVPlayer *avPlayer;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;
@property (retain, nonatomic) UIImageView *muteButton;
@property (nonatomic) BOOL isMuted;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) BOOL isListeningToVideoPlayer;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (nonatomic) BOOL isJellyfishVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (id)_autoloopAVAudioSessionQueue;

- (void)prepareForDisplay;
- (void)didMoveToWindow;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_thermalStateDidChange:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)tapGestureRecognized:(id)a0;
- (void)_removeSnapshot;
- (BOOL)_shouldAutoPlay;
- (BOOL)_applicationStateAcceptableForLooping;
- (BOOL)_shouldPauseInitialLooping;
- (BOOL)_shouldPresentQuickLookOnTap;
- (BOOL)_thermalStateAcceptableForLooping;
- (void)avPlayer:(id)a0 itemDidPlayToEnd:(id)a1;
- (void)avPlayerDidDeallocate;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)prepareForAcknowledgementDismissal;
- (void)prepareForAcknowledgementDisplay;
- (void)previewDidChange:(id)a0;
- (void)startListeningToVideoPlayer;
- (void)stopListeningToVideoPlayer;

@end
