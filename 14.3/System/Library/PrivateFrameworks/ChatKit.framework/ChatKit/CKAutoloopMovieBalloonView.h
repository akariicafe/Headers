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

+ (Class)AVPlayerClass;
+ (Class)VideoPlayerUIViewClass;
+ (Class)AVPlayerLayerClass;
+ (id)_autoloopAVAudioSessionQueue;
+ (BOOL)isEnabled;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)prepareForAcknowledgementDisplay;
- (void)prepareForAcknowledgementDismissal;
- (void)configureForMediaObject:(id)a0 previewWidth:(double)a1 orientation:(char)a2 hasInvisibleInkEffect:(BOOL)a3;
- (void)dealloc;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)prepareForReuse;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)previewDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startListeningToVideoPlayer;
- (void)stopListeningToVideoPlayer;
- (void)_removeSnapshot;
- (BOOL)_shouldPauseInitialLooping;
- (BOOL)_thermalStateAcceptableForLooping;
- (BOOL)_shouldPresentQuickLookOnTap;
- (BOOL)_applicationStateAcceptableForLooping;
- (void)avPlayer:(id)a0 itemDidPlayToEnd:(id)a1;
- (void)avPlayerDidDeallocate;
- (void)tapGestureRecognized:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_thermalStateDidChange:(id)a0;

@end
