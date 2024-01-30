@class UIView, NSString, AVButton, AVPlayerViewController, AVPlayer, NSMutableDictionary, AVStyleSheet, AVAppStorePlayerLayerView, AVObservationController, AVLayoutView;
@protocol AVPlayerViewControllerDelegate;

@interface AVAppStorePlayerView : UIView

@property (retain, nonatomic) AVButton *prominentPlayButton;
@property (retain, nonatomic) AVLayoutView *prominentPlayButtonLayoutView;
@property (retain, nonatomic) AVStyleSheet *styleSheet;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) AVAppStorePlayerLayerView *playerLayerView;
@property (retain, nonatomic) NSMutableDictionary *videoGravityForLayoutClassDictionary;
@property (readonly, nonatomic) AVObservationController *observationController;
@property (nonatomic) BOOL showsPlaybackControls;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL canPausePlaybackWhenExitingFullScreen;
@property (nonatomic) BOOL allowsEnteringFullScreen;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ playButtonHandlerForLazyPlayerLoading;
@property (nonatomic) long long preferredUnobscuredArea;
@property (weak, nonatomic) id<AVPlayerViewControllerDelegate> playerViewControllerDelegate;

- (void)setClipsToBounds:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)dealloc;
- (void)setVideoGravity:(id)a0 forLayoutClass:(unsigned long long)a1;
- (void)_makeActualVideoViewWithPlayerIfNeeded:(id)a0;
- (void)_makePlayerLayerViewWithPlayer:(id)a0;
- (void)_makePlayerViewControllerWithPlayer:(id)a0;
- (void)_prominentPlayButtonTouchUpInside:(id)a0;

@end
