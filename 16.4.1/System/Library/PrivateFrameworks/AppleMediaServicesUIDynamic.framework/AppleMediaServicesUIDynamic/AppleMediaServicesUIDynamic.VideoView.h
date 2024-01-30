@class UIColor, AVPlayerViewController, _TtC27AppleMediaServicesUIDynamic10PlayButton;

@interface AppleMediaServicesUIDynamic.VideoView : UIView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate> {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ fullScreenDelegate;
    void /* unknown type, empty encoding */ videoPlayerDelegate;
    void /* unknown type, empty encoding */ previewFrameArtwork;
    void /* unknown type, empty encoding */ animatePreviewFrameTransitions;
    void /* unknown type, empty encoding */ videoPlayer;
    void /* unknown type, empty encoding */ playerViewController;
    void /* unknown type, empty encoding */ templateMediaEvent;
    void /* unknown type, empty encoding */ templateClickEvent;
    void /* unknown type, empty encoding */ networkInquiry;
    void /* unknown type, empty encoding */ video;
    void /* unknown type, empty encoding */ playButton;
    void /* unknown type, empty encoding */ additionalControlInsets;
    void /* unknown type, empty encoding */ prominentPlayButtonLocationOverride;
    void /* unknown type, empty encoding */ preferredUnobscuredArea;
    void /* unknown type, empty encoding */ videoUrl;
    void /* unknown type, empty encoding */ unmuteAfterVideoPlayerCreation;
    void /* unknown type, empty encoding */ playbackId;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isFullScreen;
    void /* unknown type, empty encoding */ isTransitioningToFullscreen;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ wasAudioOnPreFullScreen;
    void /* unknown type, empty encoding */ prefersMinimalPlaybackControls;
    void /* unknown type, empty encoding */ currentTouch;
    void /* unknown type, empty encoding */ releaseAssetsAtNextPauseState;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) AVPlayerViewController *accessibilityPlayerViewController;
@property (nonatomic, readonly) _TtC27AppleMediaServicesUIDynamic10PlayButton *accessibilityPlayButton;
@property (nonatomic, readonly) BOOL accessibilityIsPlaying;
@property (nonatomic, readonly) BOOL accessibilityShouldBePlaying;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)playerViewController:(id)a0 willBeginFullScreenPresentationWithAnimationCoordinator:(id)a1;
- (void)accessibilityUpdatePlayerControllerControls;
- (void)didChangeAutoPlayVideoSetting;
- (void)handleMediaServicesReset;
- (void)updateAudioSessionCategoryWithIsAudioOn:(BOOL)a0;

@end
