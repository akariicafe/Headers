@class AVTurboModePlaybackControlsPlaceholderView, AVPlayerViewController, AVMobileChromeControlsView, NSValue, AVMobileChromeControlsStyleSheet, AVPlaybackControlsController, AVPlaybackControlsView;

@interface AVMobileChromeControlsViewController : AVMobileControlsViewController {
    AVPlayerViewController *_playerViewController;
    AVMobileChromeControlsView *_controlsView;
    AVPlaybackControlsController *_playbackControlsController;
    AVMobileChromeControlsStyleSheet *_styleSheet;
}

@property (readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView;
@property (readonly, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModeControlsView;
@property (nonatomic) BOOL prefersCompactFullScreenControls;
@property (retain, nonatomic) NSValue *embeddedInlineLayoutMargins;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transformForProminentPlayButton;

- (id)controlsViewControllerIfChromed;
- (void)dealloc;
- (void)flashControlsWithDuration:(double)a0;
- (void)setControlItems:(id)a0;
- (void)viewDidLoad;
- (void)didEndIndirectUserInteraction;
- (void)_updateStyleSheet;
- (void)loadView;
- (void)didBeginIndirectUserInteraction;
- (void)setVolumeController:(id)a0;
- (id)transportControlsLayoutItem;
- (id)displayModeControlsLayoutItem;
- (void)setRoutingConfiguration:(id)a0;
- (BOOL)showsFullScreenControl;
- (void)toggleVisibility:(id)a0;
- (void)setShowsFullScreenControl:(BOOL)a0;
- (void).cxx_destruct;
- (void)setTransportBarCustomMenuItems:(id)a0;
- (void)setOptimizeForPerformance:(BOOL)a0;
- (id)initWithPlayerViewController:(id)a0;
- (id)volumeControlsLayoutItem;
- (void)setIncludedControls:(unsigned long long)a0;

@end
